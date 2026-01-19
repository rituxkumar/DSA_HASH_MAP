class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> mp;
        // frequncy count.
        for (string& word : words) {
            mp[word]++;
        }

        vector<pair<string, int>> vec;
        // map se vectoe me.
        for (auto &it : mp) {
            vec.push_back({it.first, it.second});
        }

        // sort vector using comparator
        auto lambda =
            [](pair<string, int>& p1, pair<string, int>& p2) {
                if (p1.second == p2.second)
                    return p1.first < p2.first;

                return p1.second > p2.second;
            };

        sort(vec.begin(), vec.end(), lambda);
        // top-k elements.
        int i = 0;
        vector<string> ans(k);

        while (i < k) {
            ans[i] = vec[i].first;
            i++;
        }
        return ans;
    }
};