class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.size()==0) return false;
        int cnt=1;
        int i=0;
        sort(nums.begin(),nums.end());
        while(cnt==1 && i<=nums.size()-1){
            if((nums[i+1])-(nums[i])==0){
                return true;
            }i++;
        }return false;
    }
};