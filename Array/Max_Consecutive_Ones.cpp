class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        if (nums.size() == 1 or nums.size() == 2)
        {
            int count = 0;
            if (nums[0] == 1)
                count++;
            if (nums.size() == 2)
            {
                if (nums[1] == 1)
                    count++;
            }

            return count;
        }

        int ans = 0, temp = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == 1 and nums[i - 1] == 1)
            {
                temp++;
                ans = max(ans, temp);
            }
            else
            {
                temp = 0;
            }
        }
        return ans + 1;
    }
};