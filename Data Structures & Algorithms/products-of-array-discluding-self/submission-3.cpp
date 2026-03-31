class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int left=1;
        int right=1;
        int n=nums.size();
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            ans[i]=left;
            left*=nums[i];
        }
        for(int i=n-1;i>=0;i--){
            ans[i]*=right;
            right*=nums[i];
        }return ans;
    }
};
