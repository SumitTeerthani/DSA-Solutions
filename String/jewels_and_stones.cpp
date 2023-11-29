class Solution
{
public:
    int numJewelsInStones(string jewels, string stones)
    {
        unordered_set<char> s;
        int ans = 0;
        for (int i = 0; i < jewels.length(); i++)
        {
            char ch = jewels[i];
            s.insert(ch);
        }
        for (int i = 0; i < stones.length(); i++)
        {
            char ch = stones[i];
            if (s.find(ch) != s.end())
                ans++;
        }
        return ans;
    }
};