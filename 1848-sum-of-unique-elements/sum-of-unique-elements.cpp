class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_set<int> seen;
        unordered_set<int> duplicate;

        for (int& x : nums) {
            if (seen.count(x) == duplicate.count(x)) {
                seen.insert(x);

            } else if (seen.count(x)) {
                seen.erase(x);
                duplicate.insert(x);
            }
        }
        int sum = 0;
        for (int x : seen) {
            sum += x;
        }
        return sum;
    }
};