// https : // leetcode.com/problems/non-decreasing-array

class Solution
{
public:
	bool checkPossibility(vector<int> &nums)
	{
		int count = 0;
		for (int i = 0; i < nums.size() - 1; i++)
		{
			if (nums[i] > nums[i + 1])
			{
				if (++count > 1)
				{
					return false;
				}
				if (i > 0 && nums[i - 1] > nums[i + 1])
				{
					nums[i + 1] = nums[i];
				}
				else
				{
					nums[i] = nums[i + 1];
				}
			}
		}
		return true;
	}
};
