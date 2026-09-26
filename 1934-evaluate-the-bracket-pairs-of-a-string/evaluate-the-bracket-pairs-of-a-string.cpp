class Solution {
public:
    string evaluate(string s, vector<vector<string>>& arr) {
        int n = s.size();
        unordered_map<string,string>mpp;
        for(int i=0;i<arr.size();i++){
            string key = arr[i][0];
            string val = arr[i][1];
            mpp[key] = val;
        }
        string res;
        for(int i=0;i<n;i++){
            if(s[i] == '('){
                int j = i+1;
                while(s[j] != ')'){
                    j++;
                }
                string ans = s.substr(i+1,j-i-1);
                if(mpp.find(ans)!=mpp.end()){
                    res += mpp[ans];
                }
                else{
                    res+="?";
                }
                i=j;
            }
            else{
                res+=s[i];
            }
        }
        return res;
        
    }
};