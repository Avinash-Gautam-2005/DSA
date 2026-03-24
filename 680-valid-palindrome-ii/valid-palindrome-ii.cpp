class Solution {
public:
    bool checkPal(string s , int left , int right){
        while(left<right){
            if(s[left]!=s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int n = s.size();
        int left=0;
        int right=n-1;
       
        while(left<right){
            if(s[left]!=s[right]){
                return (checkPal(s, left+1,right ) || checkPal(s,left,right-1));
            }
            left++;
            right--;
        }
        return true;
        
    }
};