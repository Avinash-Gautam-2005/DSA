class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        int m = t.size();
        if(m>n) return "";
        int i=0;
        int j=0;
        int sidx = 0;
        int minlen = INT_MAX;
        unordered_map<char,int>mpp; // <char,freq>
        for(char ch : t){
            mpp[ch]++;
        }
        int cnt = mpp.size();
        while(j<n){
            if(mpp.find(s[j]) != mpp.end()){
                mpp[s[j]]--;
                if(mpp[s[j]]==0) cnt--;
            }

            // valid window
            while(cnt==0){
                if(j-i+1 < minlen){
                    minlen = j-i+1;
                    sidx  = i;
                }
                // shring the window 
                if(mpp.find(s[i]) != mpp.end()){
                    mpp[s[i]]++;
                    if(mpp[s[i]] == 1){
                        cnt++;
                    }
                }
                i++;
            }
            j++;
        }
        if(minlen == INT_MAX) return "";
        return s.substr(sidx,minlen); 
    }
};