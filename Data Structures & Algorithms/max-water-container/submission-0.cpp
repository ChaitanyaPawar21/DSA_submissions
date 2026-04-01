class Solution {
public:
    int maxArea(vector<int>& nums) {
       int left=0;
       int right=nums.size()-1;
       int maxArea=0;
       while(left<right){
        int h=min(nums[left], nums[right]);
        int w=right-left;
        int area=h*w;
        maxArea=max(area, maxArea);
        if(nums[left]>nums[right]){
        right--;
       }else{
        left++;
       }
       }
       return maxArea;
    }
};
