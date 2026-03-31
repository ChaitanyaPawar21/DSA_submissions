class Solution {
public:
    bool isPalindrome(string s) {
        string c="";
        for(char t:s){
            if(isalnum(t)){
                c+=tolower(t);
            }
        }
        int left=0;
        int right=c.size()-1;
        while(left<right){
            if(c[left]==c[right]){
                left++;
                right--;
            }else{
                return false;
            }
        }return true;
    }
};
