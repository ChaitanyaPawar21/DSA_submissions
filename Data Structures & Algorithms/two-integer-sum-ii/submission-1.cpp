class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left=0;
       int right=nums.size()-1;
       vector<int>index;
       while(left<right){
        if((nums[left]+nums[right])==target){
            index.emplace_back(left+1);
            index.emplace_back(right+1);
            break;
        }else if((nums[left]+nums[right])>target){
            right--;
        }else{
            left++;
        }
       }return index;
    }
};
