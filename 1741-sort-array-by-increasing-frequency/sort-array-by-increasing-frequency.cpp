class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        // freq... count
        for (int& num : nums) {
            mp[num]++;
        }
        sort(nums.begin(), nums.end(), [&](int a, int b) {
            if (mp[a] == mp[b])
                return a > b;
            return mp[a] < mp[b];
        });
        return nums;
    }
};