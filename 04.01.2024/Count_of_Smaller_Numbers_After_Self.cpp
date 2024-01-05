// https://leetcode.com/problems/count-of-smaller-numbers-after-self/description/

class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        int n = nums.size();
        vector<int> counts;
        for(int i = 0; i < n; i++){
            int count = 0;
            for(int j = i ; j < n ; j++){
                if(nums[j] < nums[i]){
                    count++;
                }
            }
            counts[i] = count;
        }
    return counts;
    }
};