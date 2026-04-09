class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>res;
        int left=0;
        int win=k;
        for(int i=0;i<=nums.size()-win;i++){
            int maxk=nums[left];
            int right=left+1;
            while(right!=i+win){
                maxk=max(maxk,nums[right]);
                right++;
            }res.emplace_back(maxk);
            left++;
        }return res;
    }
};
