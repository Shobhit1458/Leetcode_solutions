class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int minEle=prices[0];
        for(int i=0;i<prices.size();i++)
        {
            minEle=std::min(minEle,prices[i]);
            int profit=prices[i]-minEle;
            maxprofit=std::max(maxprofit,profit);
        }
        return maxprofit;
    }
};