class Solution {
public:
    bool f(int i ,int j , string& s1 , string& s2){
        if(i<0) return true;
        if(j<0) return false;
        bool pick = false;
        if(s1[i]== s2[j]){
            pick = f(i-1,j-1,s1,s2);
        }
        bool notpick = f(i,j-1,s1,s2);
        return pick || notpick;

    }
    bool isSubsequence(string s, string t) {
        int n = s.size();
        int m = t.size();
        return f(n-1,m-1,s,t);
    }
};