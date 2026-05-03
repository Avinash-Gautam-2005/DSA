class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size();
        int m=goal.size();
        if( n != m ) return false;
        for(int i=0;i<n;i++){
            char first=s[0];
            s.erase(0,1);
            s.push_back(first);
            if(s==goal) return true;
        }
        return false; 
    }
};