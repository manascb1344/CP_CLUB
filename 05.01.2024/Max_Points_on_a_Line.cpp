// https://leetcode.com/problems/max-points-on-a-line/

class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n = points.size();
        int ans = 0;

        if(n==1){
            return 1;
        }

        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                int sol = 0;
                for(int k = 0; k < n; k++){
                    int s1 = (points[k][1] - points[i][1]) * (points[j][0] - points[i][0]);
                    int s2 = (points[k][0] - points[i][0]) * (points[j][1] - points[i][1]);
                    if(s1 == s2){
                        sol++;
                    }
                }
                ans=max(ans,sol);
            }
        }
        return ans;
    }
};