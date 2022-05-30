class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = nums[0], current_sum=0;
        for (auto i:nums) {
            current_sum+=i;
            max_sum = max(max_sum, current_sum);
            current_sum = max(0, current_sum);
        }
        return max_sum;
    }
};