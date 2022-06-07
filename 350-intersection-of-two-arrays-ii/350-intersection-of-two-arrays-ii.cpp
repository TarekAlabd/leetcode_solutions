class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> m;
        if (nums1.size() > nums2.size()) {
            swap(nums1, nums2);
        }
        for (auto i:nums1) {
            m[i]++;
        }
        int n=0;
        for (auto i:nums2) {
            if (m[i] > 0) {
                nums1[n++] = i;
                m[i]--;
            }
        }
        vector<int> result(nums1.begin(), nums1.begin()+n);
        return result;
    }
};