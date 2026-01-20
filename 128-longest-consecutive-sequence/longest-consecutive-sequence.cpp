class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
               unordered_set<int> st(nums.begin(), nums.end());
        int longest = 0;

        for (int num : st) {

            // start only if num-1 does not exist
            if (st.count(num - 1) == 0) {

                int currentNum = num;
                int length = 1;

                // count consecutive numbers
                while (st.count(currentNum + 1)) {
                    currentNum++;
                    length++;
                }

                longest = max(longest, length);
            }
        }

        return longest; 
    }
};