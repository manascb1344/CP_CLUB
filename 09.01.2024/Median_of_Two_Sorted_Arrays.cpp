// https://leetcode.com/problems/median-of-two-sorted-arrays/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans(nums1.begin(), nums1.end());
        ans.insert(ans.end(), nums2.begin(), nums2.end());
        sort(ans.begin(), ans.end());
        int n = ans.size();
        if (n % 2 != 0) {
            return ans[n / 2];
        }
        double ans2 = (ans[n / 2] + ans[n / 2 - 1]) / 2.0;
        return ans2;
    }
};