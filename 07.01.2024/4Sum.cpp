// https://leetcode.com/problems/4sum

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        set<vector<int>> st;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 3; i++) {
            for (int j = i + 1; j < n - 2; j++) {
                long long k = (long long)target - (long long)nums[i] - (long long)nums[j];
                int l = j + 1;
                int r = n - 1;
                while (l < r) {
                    if (nums[l] + nums[r] < k) {
                        l++;
                    } else if (nums[l] + nums[r] > k) {
                        r--;
                    } else {
                        st.insert({nums[i], nums[j], nums[l], nums[r]});
                        l++;
                        r--;
                    }
                }
            }
        }
        vector<vector<int>> ans;
        for (auto i : st) {
            ans.push_back(i);
        }
        return ans;
    }
};