#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestBuy = prices[0];
        int maxProfit = 0;

        for(int i = 1; i<prices.size(); i++){
            if(bestBuy < prices[i]){
                maxProfit = max(maxProfit, prices[i] - bestBuy);
            }
            bestBuy = min(prices[i], bestBuy);
        }

        return maxProfit;
    }
};