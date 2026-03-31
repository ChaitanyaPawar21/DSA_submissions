class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pro=1;
        int n=nums.size();
        vector<int>prolist(n,0);
        int zeroCount=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                zeroCount++;
                continue;
            }else{
                pro*=nums[i];
            }
        }
        for(int i=0;i<n;i++){
            if(zeroCount == 1 && nums[i]==0){
                prolist[i]=pro;
            }else if(zeroCount == 0){
                prolist[i]=pro/nums[i];
            }else{
                prolist[i]=0;
            }
        }return prolist;
    }
};
