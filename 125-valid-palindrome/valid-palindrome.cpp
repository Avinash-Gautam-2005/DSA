class Solution {
public:
    bool isPalindrome(string s) {

         int n = s.size();
        int start = 0;
        int last = n - 1;
        
        while (start < last) {
            // Skip non-alphanumeric characters
            if (!isalnum(s[start])) {
                start++;
            } else if (!isalnum(s[last])) {
                last--;
            } else {
                // Compare characters case-insensitively
                if (tolower(s[start]) != tolower(s[last])) {
                    return false;
                }
                start++;
                last--;
            }
        }
        return true;
        
    }
};