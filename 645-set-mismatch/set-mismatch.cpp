class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int, int> mp;
        int duplicate = -1;
        int miss = -1;
        int n = nums.size();
        // frequnecy count karo.

        for (int& num : nums) {
            mp[num]++;
        }

        for (int i = 0; i <= n; i++) {
            if (mp[i] == 2)
                duplicate = i;
            if (mp[i] == 0)
                miss = i;
        }

        return {duplicate, miss};
    }
};