class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left=0;
        int right=prices.size()-1;
        int max1=0;
        int min1=INT_MAX;
        int profit=0;
        vector<int>buy;
        vector<int>sell;
        for(int i=0;i<prices.size();i++){
            min1=min(min1,prices[i]);
            buy.emplace_back(min1);
            max1=max(max1,prices[prices.size()-i-1]);
            sell.emplace_back(max1);
        }
        while(left!=sell.size()-1){
            profit=max(profit, sell[right]-buy[left]);
            left++;
            right--;
        }
        return profit;
    }
};
