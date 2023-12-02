class Solution
{
public:
    int countCharacters(vector<string> &words, string chars)
    {
        int ans = 0;

        for (int i = 0; i < words.size(); i++)
        {
            int count[256] = {0};
            for (int j = 0; j < chars.length(); j++)
            {
                char ch = chars[j];
                count[ch]++;
            }
            string s = words[i];
            for (int j = 0; j < s.length(); j++)
            {
                char ch = s[j];
                count[ch]--;
            }
            bool temp = true;
            for (int j = 0; j < 256; j++)
            {
                if (count[j] < 0)
                    temp = false;
            }
            if (temp)
                ans += s.length();
        }

        return ans;
    }
};