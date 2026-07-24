class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buy = prices[0];
        int tempp=0;
        int p=0;
        for(int i=1;i<n;i++){
            if(prices[i]<buy){
                buy=prices[i];
            }
            else if(prices[i]>buy){
                tempp = prices[i]-buy;
                p=max(p,tempp);
            }
           
        }
        return p;
    }
};