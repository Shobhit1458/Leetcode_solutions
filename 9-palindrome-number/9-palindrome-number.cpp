class Solution {
public:
    bool isPalindrome(int x) {
        string test = to_string(x);
        reverse(test.begin(), test.end());
        return to_string(x) == test;
    }
};