class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        if (p.length() > s.length())
            return ans;
        unordered_map<char, int> need, window;
        for (char& c : p) {
            need[c]++;
        }
        int left = 0;
        for (int right = 0; right < s.length(); right++) {
            window[s[right]]++;

            if (right - left + 1 > p.length()) {
                window[s[left]]--;
                if (window[s[left]] == 0)
                    window.erase(s[left]);
                left++;
            }
            if (window == need)
                ans.push_back(left);
        }
        return ans;
    }
};