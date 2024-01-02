// https://leetcode.com/problems/largest-number/
class Solution
{
public:
    bool static comparefunc(int a, int b)
    {
        string astr = to_string(a);
        string bstr = to_string(b);
        return astr + bstr > bstr + astr;
    }
    string largestNumber(vector<int> &nums)
    {
        sort(nums.begin(), nums.end(), comparefunc);
        string ans;
        for (int i = 0; i < nums.size(); i++)
        {
            ans += to_string(nums[i]);
        }
        if (ans[0] == '0')
        {
            return "0";
        }
        return ans;
    }
};