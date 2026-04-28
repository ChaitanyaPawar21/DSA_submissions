class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0, maxlen=0;
        if(s.size()==1) return 1;
        unordered_map<char, int>freq;
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
            while(freq[s[i]]>1){
                freq[s[left]]--;
                left++;
            }
            maxlen=max(maxlen, i-left+1);
        }
       return maxlen;
    }
};
