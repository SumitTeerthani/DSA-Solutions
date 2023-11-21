class Solution
{
public:
    int rev(int x)
    {
        int n = 0;
        while (x > 0)
        {
            n = n * 10 + (x % 10);
            x = x / 10;
        }
        return n;
    }

    long long int pairsum(int x)
    {
        long long int no = 0;
        for (int i = x - 1; i >= 1; i--)
        {
            no += i;
        }

        return no;
    }

    int countNicePairs(vector<int> &nums)
    {

        long long int ans = 0;
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            nums[i] = nums[i] - rev(nums[i]);
            mp[nums[i]]++;
        }

        for (auto x : mp)
        {
            ans += pairsum(x.second);
        }

        int finalans = ans % (1000000007);
        return finalans;
    }
}; // Question Done