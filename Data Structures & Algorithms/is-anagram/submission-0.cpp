class Solution {
public:
    bool isAnagram(string s, string t) {
        
        // Step 1: Length check
        if (s.length() != t.length()) {
            return false;
        }

        // Step 2: Frequency array
        vector<int> count(26, 0);

        // Step 3: Update counts
        for (int i = 0; i < s.length(); i++) {
            count[s[i] - 'a']++;  // increment for s
            count[t[i] - 'a']--;  // decrement for t
        }

        // Step 4: Verify all zeros
        for (int i = 0; i < 26; i++) {
            if (count[i] != 0) {
                return false;
            }
        }

        return true;
    }
};