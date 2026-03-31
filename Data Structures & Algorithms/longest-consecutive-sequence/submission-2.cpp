class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        sort(nums.begin(), nums.end());
        stack<int> st;
        int cnt=1;
        int cnt2=1;
        st.push(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i]-(st.top())!=1){
                if(nums[i]-(st.top())==0){
                    continue;
                }
                st.empty();
                cnt=1;
                st.push(nums[i]);
                
            }else{
                st.push(nums[i]);
                cnt++;
                cnt2=max(cnt2, cnt);
            }
        }return cnt2;
    }
};
