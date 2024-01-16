// https://leetcode.com/problems/minimum-time-to-complete-all-tasks/

class Solution {
public:
    int findMinimumTime(vector<vector<int>>& tasks) {
        int ans = 0;
        for (int i = 1; i <= 2000; i++) {
            bool flag = false;
            for (int j = 0; j < tasks.size(); j++) {
                if (tasks[j][2] > 0 && tasks[j][1] - i + 1 == tasks[j][2]) {
                    flag = true;
                }
            }

            if (flag == true) {
                for (int j = 0; j < tasks.size(); j++) {
                    if (tasks[j][2] > 0 && tasks[j][0] <= i && tasks[j][1] >= i) {
                        tasks[j][2]--;
                    }
                }
                ans++;
            }
        }
        return ans;
    }
};