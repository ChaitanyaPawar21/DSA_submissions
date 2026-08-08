class Solution {
public:

    class TrieNode {
    public:
        TrieNode* children[26];
        bool isEnd;

        TrieNode() {
            isEnd = false;

            for(int i = 0; i < 26; i++) {
                children[i] = NULL;
            }
        }
    };

    TrieNode* root;
    int ans;

    void insert(const string& word) {

        TrieNode* node = root;

        for(char ch : word) {

            int idx = ch - 'a';

            if(node->children[idx] == NULL) {
                node->children[idx] = new TrieNode();
            }

            node = node->children[idx];
        }

        node->isEnd = true;
    }

    void solve(const string& s, int curr, int extra) {

        // Pruning
        if(extra >= ans)
            return;

        // End of string
        if(curr == s.size()) {
            ans = extra;
            return;
        }

        // Option 1:
        // Make current character extra
        solve(s, curr + 1, extra + 1);


        // Option 2:
        // Try dictionary words starting at curr
        TrieNode* node = root;

        for(int i = curr; i < s.size(); i++) {

            int idx = s[i] - 'a';

            // No Trie path
            if(node->children[idx] == NULL)
                break;

            node = node->children[idx];

            // Found a dictionary word
            if(node->isEnd) {
                solve(s, i + 1, extra);
            }
        }
    }

    int minExtraChar(string s, vector<string>& dictionary) {

        root = new TrieNode();

        for(const string& word : dictionary) {
            insert(word);
        }

        ans = s.size();

        solve(s, 0, 0);

        return ans;
    }
};