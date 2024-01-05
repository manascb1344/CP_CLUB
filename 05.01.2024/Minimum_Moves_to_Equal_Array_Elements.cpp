// https://leetcode.com/problems/minimum-moves-to-equal-array-elements/description/

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int minim = INT_MAX;
        for(int i = 0; i < n; i++){
            minim = min(minim, nums[i]);
        }
        int ans = 0;
        for(int i = 0 ; i < n; i++){
            ans += nums[i] - minim; 
        }

        return ans;
    }
};