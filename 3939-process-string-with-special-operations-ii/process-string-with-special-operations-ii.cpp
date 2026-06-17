class Solution {
public:
    char processStr(string s, long long k) {
        int n = s.size();
        vector<long long> len(n + 1, 0);
        const long long LIM = 1e15;

        for (int i = 0; i < n; i++) {
            char c = s[i];

            if ('a' <= c && c <= 'z')
                len[i + 1] = min(LIM, len[i] + 1);
            else if (c == '*')
                len[i + 1] = max(0LL, len[i] - 1);
            else if (c == '#')
                len[i + 1] = min(LIM, len[i] * 2);
            else
                len[i + 1] = len[i];   // reverse
        }

        if (k >= len[n]) return '.';

        for (int i = n - 1; i >= 0; i--) {
            char c = s[i];

            if ('a' <= c && c <= 'z') {
                if (k == len[i])
                    return c;
            }
            else if (c == '*') {
                // length before '*' was len[i]
                // after '*' became len[i+1]=len[i]-1 (if len[i]>0)
                if (len[i] > 0 && k == len[i] - 1)
                    continue;
            }
            else if (c == '#') {
                long long half = len[i];
                if (k >= half)
                    k -= half;
            }
            else { // reverse
                k = len[i] - 1 - k;
            }
        }

        return '.';
    }
};