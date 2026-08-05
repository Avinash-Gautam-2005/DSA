class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        unordered_map<char,int>mpp;
        for(char & ch : s){
            mpp[ch]++;
        }
        string ans ="";
        vector<pair<int,char>>vec;
        for(auto& it:mpp){
           vec.push_back({it.second,it.first});
        }
        sort(vec.begin(), vec.end(), greater<pair<int,char>>());
        for(auto &it:vec){
            ans.append(it.first,it.second);
        }
        return ans;
        
    }
};