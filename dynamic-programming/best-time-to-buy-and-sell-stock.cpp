class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
         int profit=0;
         int min=prices[0];
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min){
                min=prices[i];
            }
            profit=prices[i]-min;


            
          

  maxprofit=max(maxprofit,profit);
        }
        return maxprofit;
        
    }
};