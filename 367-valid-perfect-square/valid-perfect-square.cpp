class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1) return true;
        if(num==2 ||  num==3) return false;
        long long low=2;
        long long high=num;
        while(low<=high){
            long long mid = low+(high-low)/2;
            if(mid * mid == num) return true;
            if(mid*mid > num) high=mid-1;
            else low=mid+1;
        }
        return false;
        
    }
};