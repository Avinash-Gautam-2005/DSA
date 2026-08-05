class Solution {
public:
    int beautySum(string s) {
        int n= s.size();
        int res =0 ;
        for(int i=0;i<n;i++){
            vector<int> hash(26,0);
            for(int j=i;j<n;j++){
                hash[s[j]-'a']++;
                int maxi = 0;
                int mini = INT_MAX;
                for(int k=0;k<hash.size();k++){
                    if(hash[k]>0){
                        maxi = max(maxi,hash[k]);
                        mini = min(mini,hash[k]);
                    }
                }
                res += maxi-mini;

            }
        }
        return res;
        
    }
};