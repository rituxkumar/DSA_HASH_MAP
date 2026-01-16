class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>st;
        long long maxi = 1;
        for(int num : nums){
            st.insert(num);
            if(num>maxi)maxi=num;
        }

        for(long long i = 1;i<=maxi+1;i++){
            if(st.find(i) == st.end()){
                return i;
                break;
            }
        }
        return maxi;


       
    }
};