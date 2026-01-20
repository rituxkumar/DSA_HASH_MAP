class Solution {
public:
    int sumOfUnique(vector<int>& nums) {

        int sum = 0;
        unordered_map<int, int> mp;
        // frequency count...
        for (int& num : nums) {
            mp[num]++;
        }

        // add only unique elements.
        for (auto& it : mp) {
            if(it.second == 1) {
                sum += it.first;
            }
        }

        return sum;
    }
};