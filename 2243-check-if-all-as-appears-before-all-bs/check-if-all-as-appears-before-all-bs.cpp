class Solution {
public:
    bool checkString(string s) {
        int n = s.size();
        int low = 0;
        int high = n - 1;
        int cntA = 0;
        int cntB = 0;

        for(int i = 0; i < n; i++){
            if(s[i] == 'a') cntA++;
            else cntB++;
        }
        if(cntA == n || cntB == n) return true;
        // corrected logic here
        while(low < n - 1){
            if(s[low] == 'b' && s[low + 1] == 'a'){
                return false;
            }
            low++;
        }
        return true;
    }
};
