class Solution {
public:
    int hammingWeight(int n) {
        vector<int> bits;

        while (n > 0) {
            bits.push_back(n & 1);
            n >>= 1;
        }
        int cnt = 0;
        for (int i = 0; i < bits.size(); i++) {
            if (bits[i] == 1)
                cnt++;
        }
        return cnt;
    }
};