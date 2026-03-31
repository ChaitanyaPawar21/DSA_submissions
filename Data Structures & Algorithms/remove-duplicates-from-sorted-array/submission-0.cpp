class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left=0;
        int right=1;
        while(left!=nums.size()-1){
            if(nums[left]==nums[right]){
                nums.erase(nums.begin()+right);
            }else{
                left++;
                right++;
            }
        }
        return nums.size();
    }
};