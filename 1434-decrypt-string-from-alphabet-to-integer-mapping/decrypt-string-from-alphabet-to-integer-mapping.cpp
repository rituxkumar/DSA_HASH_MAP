class Solution {
public:
    string freqAlphabets(string s) {
        string ans = "";
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == '#') {
                int num = (s[i - 2] - '0') * 10 + (s[i - 1] - '0');
                ans.push_back(char('a' + num - 1));
                i -= 2;
            } else {
                int num = s[i] - '0';
                ans.push_back(char('a' + num - 1));
            }
        }
        reverse(begin(ans), end(ans));
        return ans;
    }
};