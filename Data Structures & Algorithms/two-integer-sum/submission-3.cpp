class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            int rem=target-nums[i];
            if(mpp.find(rem)!=mpp.end()){
                res.emplace_back(mpp[rem]);
                res.emplace_back(i);
                
            }
            mpp[nums[i]]=i;
        }return res;
    }
};
