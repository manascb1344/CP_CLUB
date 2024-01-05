// https://leetcode.com/problems/h-index

class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end());
        int maxim = INT_MIN;
        int n = citations.size();
        for(int i = 0 ; i < citations.size(); i++){
            if(citations[i] >= citations.size() - i){
                maxim = max(maxim, (n - i));
            }
        }
        if(maxim==INT_MIN){
            return 0;
        }
        else{
            return maxim;
        }
    }
};