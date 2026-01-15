class Solution {
public:
    int M = 1e9 + 7;
    int rev(int num) {
        int answer = 0;
        while (num > 0) {
            int remainder = num % 10;
            answer = (answer * 10) + remainder;
            num = num / 10;
        }
        return answer;
    }
    int countNicePairs(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++) {
            nums[i] = nums[i] - rev(nums[i]);
        }
        int result = 0;

        for (int i = 0; i < n; i++) {
            result = (result + mp[nums[i]]) % M;
            mp[nums[i]]++;
        }
        return result;
    }
};