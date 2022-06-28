class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum_all=0, sum_till_index=0;
        for (auto num:nums) {
            sum_all += num;
        }
        for (int i=0; i<nums.size(); i++) {
            if (i != 0) {
                sum_till_index += nums[i-1];
            }
            bool condition = (sum_all - (sum_till_index + nums[i])) == sum_till_index;
            if (condition) {
                return i;
            }
        }
        return -1;
    }
};