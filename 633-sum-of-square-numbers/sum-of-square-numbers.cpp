class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c==0) return true;
       long long  low =1;
       long long  high=sqrt(c);
       while(low<=high){
        if(low*low ==c) return true;
        if(high*high==c) return true;
        if(low*low + high*high == c) return true;
        else if(low*low+high*high > c) high--;
        else{
            low++;
        }


       }
       return false;
        
    }
};