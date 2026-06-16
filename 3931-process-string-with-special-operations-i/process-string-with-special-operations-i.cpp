class Solution {
public:
    string processStr(string s) {
        int n = s.size();
        string res = "";
        for (char ch : s) {
            string dup = "";
            if (ch >= 'a' && ch <= 'z') {
                res.push_back(ch);
            } else if (ch == '*') {
                if (!res.empty())
                    res.pop_back();
            } else if (ch == '#') {
                dup = res;
                res += dup;
                dup = "";
            } else {
                reverse(res.begin(), res.end());
            }
        }
        return res;
    }
};