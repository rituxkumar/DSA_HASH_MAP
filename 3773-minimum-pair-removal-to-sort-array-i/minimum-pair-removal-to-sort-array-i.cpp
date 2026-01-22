class Solution {
public:
    int minSum(vector<int>& nums) {
        int sum = INT_MAX;
        int index = -1;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] + nums[i + 1] < sum) {
                index = i;
                sum = nums[i] + nums[i + 1];
            }
        }

        return index;
    }

    int minimumPairRemoval(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        while (!is_sorted(begin(nums), end(nums))) {
            int idx = minSum(nums);
            nums[idx] = nums[idx] + nums[idx + 1];
            nums.erase(nums.begin() + idx + 1);
            count++;
        }

        return count;
    }
};