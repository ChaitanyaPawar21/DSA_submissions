class Solution {
public:

    vector<vector<int>> threeSum(vector<int>& nums) {
       vector<vector<int>>ans;
       sort(nums.begin(),nums.end());
       int n=nums.size();
       for(int left=0;left<n;left++){
        if (left > 0 && nums[left] == nums[left - 1]) continue;
       int right=nums.size()-1;
       int mid=left+1;
       while(mid<right ){
         
        int sum=nums[left]+nums[right]+nums[mid];
        if(sum<0){
            mid++;
        }else if(sum>0){
            right--;
        }else{
            vector<int>temp={nums[left],nums[mid],nums[right]};
            ans.push_back(temp);
            while(mid<right && nums[mid]==nums[mid+1]) mid++;
            while(mid<right && nums[right]==nums[right-1]) right--;
            mid++;
            right--;

        }
       }
       }return ans;
    }
};
