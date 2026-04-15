class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        if(nums.size()==1){
            if(nums[0]<target){
                return 1;
            }else{
                return 0;
            }
        }else{
        while(left<=right){
            int mid=(left+right)/2;
            if(nums[mid]==target) {
                return mid;
            }
            else if(target>nums[nums.size()-1]){
                return nums.size();
            }
            else if((nums[mid+1]>target && nums[mid]<target)){
                return mid+1;
            }
            else if(nums[mid]>target){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }return 0;
    }}
};