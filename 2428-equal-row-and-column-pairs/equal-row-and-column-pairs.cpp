class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        int result = 0;
        for (int row = 0; row < n; row++) {
            for (int col = 0; col < n; col++) {
                int isEqual = true;

                for (int i = 0; i < n; i++) {
                    if (grid[row][i] != grid[i][col]) {
                        isEqual = false;
                        break;
                    }
                }
                result += isEqual;
            }
        }
        return result;
    }
};