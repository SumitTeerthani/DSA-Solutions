class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int ans = -1;
        if (haystack == needle)
            return 0;
        int l1 = haystack.length(), l2 = needle.length();
        for (int i = 0; i <= l1 - l2; i++)
        {
            if (haystack[i] == needle[0])
            {
                bool isthere = true;
                int k = 0;
                for (int j = i; j < i + l2; j++)
                {
                    if (haystack[j] != needle[k])
                    {
                        isthere = false;
                        break;
                    }

                    k++;
                }
                if (isthere)
                {
                    ans = i;
                    break;
                }
            }
        }
        return ans;
    }
};