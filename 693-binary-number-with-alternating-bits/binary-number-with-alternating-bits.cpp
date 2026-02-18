class Solution {
public:
    bool hasAlternatingBits(int n) {
    vector<int> bits;

    while(n > 0) {
        bits.push_back(n & 1);
        n >>= 1;
    }
   
    for(int i=0;i<bits.size()-1;i++){
        if(bits[i]==bits[i+1]) return false;
    }
    return true;
      
    }
};