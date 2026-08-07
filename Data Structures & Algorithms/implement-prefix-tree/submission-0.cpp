class PrefixTree {
public:
    PrefixTree* children[26];
    bool isEnd;

    PrefixTree() {
        isEnd = false;
        for (int i = 0; i < 26; i++)
            children[i] = nullptr;
    }

    void insert(string word) {
        PrefixTree* node = this;

        for (char ch : word) {
            int idx = ch - 'a';

            if (node->children[idx] == nullptr)
                node->children[idx] = new PrefixTree();

            node = node->children[idx];
        }

        node->isEnd = true;
    }

    bool search(string word) {
        PrefixTree* node = this;

        for (char ch : word) {
            int idx = ch - 'a';

            if (node->children[idx] == nullptr)
                return false;

            node = node->children[idx];
        }

        return node->isEnd;
    }

    bool startsWith(string prefix) {
        PrefixTree* node = this;

        for (char ch : prefix) {
            int idx = ch - 'a';

            if (node->children[idx] == nullptr)
                return false;

            node = node->children[idx];
        }

        return true;
    }
};