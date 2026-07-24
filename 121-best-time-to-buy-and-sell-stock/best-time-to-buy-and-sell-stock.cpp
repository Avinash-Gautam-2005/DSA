class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bprice=prices[0];
        int maxp=0;
        for(int i=1;i<prices.size();i++){
             if(prices[i]>bprice){
                maxp=max(maxp,prices[i]-bprice);

             }
             else if(prices[i]<bprice){
                bprice=prices[i];
             }

        }
        return maxp;
    }
};