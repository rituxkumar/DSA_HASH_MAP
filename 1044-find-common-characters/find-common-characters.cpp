class Solution {
public:
    vector<string> commonChars(vector<string>& words) {

        vector<int> freq(26, 0);

        // count first word
        for (char c : words[0]) {
            freq[c - 'a']++;
        }

        // process remaining words
        for (int i = 1; i < words.size(); i++) {

            vector<int> temp(26, 0);

            for (char c : words[i]) {
                temp[c - 'a']++;
            }

            // take minimum
            for (int j = 0; j < 26; j++) {
                freq[j] = min(freq[j], temp[j]);
            }
        }

        // build answer
        vector<string> ans;
        for (int i = 0; i < 26; i++) {
            while (freq[i] > 0) {
                ans.push_back(string(1, i + 'a'));
                freq[i]--;
            }
        }

        return ans;
    }
};
