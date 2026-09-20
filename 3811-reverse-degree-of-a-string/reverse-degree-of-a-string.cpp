class Solution {
public:
    int reverseDegree(string s) {
        int n = s.size();
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            ans[i] = (26-(s[i]-'a'));
        }
        int sum = 0;
        for(int i=0;i<ans.size();i++){
            sum+= ans[i]*(i+1);
        }
        return sum;
    }
};