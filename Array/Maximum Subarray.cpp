class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        long long int sum = 0;
        long long int maxi;
        int n = nums.size();
        maxi = nums[0];
        for (int i = 0; i < n; i++)
        {
            sum = sum + nums[i];
            maxi = max(maxi, sum);
            if (sum < 0)
                sum = 0;
        }
        return maxi;
    }
}; // Question Done