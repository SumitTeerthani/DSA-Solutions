class Solution
{
public:
    int minPairSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        // return nums[0]+nums[nums.size()-1];
        int n = nums.size();
        int j = n - 1, maxno = 0;
        for (int i = 0; i < n / 2; i++)
        {
            maxno = max(maxno, nums[i] + nums[j]);
            j--;
        }
        return maxno;
    }
};