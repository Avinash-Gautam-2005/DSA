class Solution {
public:
    int maxProduct(int n) {
        vector<int> res;
        while(n){
            int dig= n%10;
            res.push_back(dig);
            n = n/10;
        }
        sort(res.begin(),res.end());
        return res[res.size()-1]*res[res.size()-2];
        
    }
};