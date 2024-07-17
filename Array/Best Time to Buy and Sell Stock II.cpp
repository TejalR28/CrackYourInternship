class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int buy = prices[0];
	int maxiPr = 0 ;
	for (int i= 1;i< prices.size();i++) {
		if (buy > prices[i]) {
			buy = prices[i];
		}
		int profit = prices[i] - buy;
		if (profit > 0) {
			maxiPr += profit;
			buy = prices[i];
		}
	}
	return maxiPr ;
    }
};