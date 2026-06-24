class Solution {
    bool chk(char c) {
        return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'));
    }
public:
    bool isPalindrome(string s) {
        int l = 0 , r = s.size() - 1;

        while (l < r) {
             if (!chk(s[l])) {
                l++;
                continue;
             }
             if (!chk(s[r])) {
                r--;
                continue;
             }

            if (tolower(s[l]) != tolower(s[r])) return false;
            else l++ , r--;
        }

        return true;
    }
};
