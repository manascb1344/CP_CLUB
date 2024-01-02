// https://leetcode.com/problems/majority-element/
# 1
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++)
        {
            map[nums[i]]++;
        }
        for (auto i : map)
        {
            if (i.second > floor(nums.size() / 2))
            {
                return i.first;
            }
        }
        return -1;
    }
};

# 2
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        return nums[nums.size() / 2];
    }
};