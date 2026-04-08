class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0, right=0,maxLen=0;
        vector<int>hash(256,-1);
        int n=s.size();
        while(right<n){
            if(hash[s[right]]>=left){
                left=hash[s[right]]+1;
            }
            hash[s[right]]=right;
            maxLen=max(maxLen, right-left+1);
            right++;
        }
return maxLen;
       
    }
};
