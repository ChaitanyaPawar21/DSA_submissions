class Solution {
public:
    int numRescueBoats(vector<int>& nums, int limit) {
        sort(nums.begin(),nums.end());
        int left=0;
        int right=nums.size()-1;
        int boat=0;

        while(left<=right){
            if(nums.size()==1) return 1;
            if(nums[left]+nums[right]<=limit){
                left++;
            }
            right--;
            boat++;
        }return boat;
    }
};