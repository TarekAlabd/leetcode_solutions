class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> preSum(n+1, 0);
        for (int i=0; i<n; i++) {
            preSum[i+1] = preSum[i] + nums[i];
        }
        for (int i=0; i<n; i++) {
            if (preSum[i] == preSum[n] - preSum[i+1]) {
                return i;
            }
        }
        return -1;
    }
};