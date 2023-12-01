class Solution
{
public:
    vector<int> findWordsContaining(vector<string> &words, char x)
    {

        vector<int> ans;
        for (int i = 0; i < words.size(); i++)
        {
            string s = words[i];
            for (int j = 0; j < s.length(); j++)
            {
                char ch = s[j];
                if (ch == x)
                {
                    ans.push_back(i);
                    break;
                }
            }
        }

        return ans;
    }
};