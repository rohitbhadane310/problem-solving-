// 121. Best Time to Buy and Sell Stock

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
        
//         int n = prices.size();
//         int maxProfit = 0 , minProfit = INT_MAX;

//         for(int i = 0; i < n; i++)
//         {
//             minProfit = min(minProfit , prices[i]);
//             maxProfit = max(maxProfit , prices[i] - minProfit);
//         }

//         return maxProfit;
//     }
// };