class Solution {
public:
    bool isPalindrome(string s) {
        string result;
        for (char c : s) {
            if (isalpha(c) || isdigit(c)) {
                result += tolower(c);
            }
        }
        int len = result.length();
        int i = 0;
        int j = len - 1;
        while (i < j) {
            if (result[i] != result[j]) return false;
            i += 1;
            j -= 1;
        }
        return true;
    }
};