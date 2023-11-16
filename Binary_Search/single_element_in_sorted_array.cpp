class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        if (nums.size() == 1)
            return nums[0];
        int start = 0, end = nums.size() - 1;
        while (start <= end)
        {
            if (nums[start] != nums[start + 1])
                return nums[start];
            else
                start += 2;
            if (nums[end] != nums[end - 1])
                return nums[end];
            else
                end -= 2;
        }
        return 0;
    }
}; // Question Done