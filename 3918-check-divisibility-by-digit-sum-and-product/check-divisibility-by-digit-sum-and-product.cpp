class Solution {
public:
    int s(int n){
        int sum =0;
        while(n){
            int dig = n%10;
            sum+=dig;
            n=n/10;
        }
        return sum;
    }
    int p(int n){
        int prod =1;
        while(n){
            int dig = n%10;
            prod = prod*dig;
            n=n/10;
        }
        return prod;
    }
    bool checkDivisibility(int n) {
        int digSum = s(n);
        int digprod= p(n);
        int total = digSum + digprod;
       if(n%total==0) return true;
       return false;
        
    }
};