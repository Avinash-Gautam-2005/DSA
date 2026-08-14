class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        unordered_map<char,int>mpp;
        int start=0;
        int maxlen = 0;
        for(int i=0;i<n;i++){
            mpp[s[i]]++;
            while(i<n && mpp[s[i]]>2){
                mpp[s[start]]--;
                start++;
            }
            maxlen = max(maxlen , i-start+1);
        }
        return maxlen;
        
    }
};