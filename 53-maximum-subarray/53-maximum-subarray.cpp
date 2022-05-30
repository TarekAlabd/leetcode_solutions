class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = INT_MIN, current_sum=0;
        for (auto i:nums) {
            if (current_sum < 0) {
                current_sum=0;
            }
            current_sum+=i;
            max_sum = max(max_sum, current_sum);
        }
        return max_sum;
    }
};