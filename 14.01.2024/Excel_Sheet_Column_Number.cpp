// https://leetcode.com/problems/excel-sheet-column-number/

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n = columnTitle.size();
        int count = 0;
        for (int i = 0; i < n; i++) {
            int add = (columnTitle[i] - 'A' + 1);
            count = count * 26 + add;
        }
        return count;
    }
};