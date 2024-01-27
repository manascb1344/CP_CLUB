// https://leetcode.com/problems/132-pattern

class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int minim = INT_MIN;
        stack<int> stk;
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (nums[i] < minim) {
                return true;
            } else {
                while (stk.size() != 0 && nums[i] > stk.top()) {
                    minim = stk.top();
                    stk.pop();
                }
            }
            stk.push(nums[i]);
        }
        return false;
    }
};