class Solution {
public:
    int prod(int n){
        int res=1;
        while(n){
            int dig = n%10;
            res =res*dig;
            n=n/10;
        }
        return res;
    }
    int smallestNumber(int n, int t) {
        for(int i=n;i<=100;i++){
            if(prod(i)%t==0){
                return i;
            }
        }
        return -1;
        
    }
};