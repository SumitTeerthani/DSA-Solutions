class Solution
{
public:
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        vector<vector<int>> ans;
        int n = nums.size();
        unordered_set<int> tmp;
        for (int i = 0; i < (1 << n); i++)
        {
            vector<int> v;
            for (int j = 0; j < n; j++)
            {
                if (i & (1 << j))
                    v.push_back(nums[j]);
            }
            int k = 0;
            for (int j = 0; j < ans.size(); j++)
            {
                sort(v.begin(), v.end());
                if (v == ans[j])
                    k = 1;
            }
            if (k != 1)
                ans.push_back(v);
            sort(ans.begin(), ans.end());
        }
        return ans;
    }
}; // Question Done