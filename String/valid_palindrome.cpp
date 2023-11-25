class Solution
{
public:
    bool checkPalindrome(string s)
    {
        int start = 0, end = s.length() - 1;
        while (start <= end)
        {
            if (s[start] != s[end])
                return false;
            start++;
            end--;
        }
        return true;
    }

    bool isPalindrome(string s)
    {
        string temp = "";
        bool ans;
        for (int i = 0; i < s.length(); i++)
        {
            char ch = s[i];
            int k = (int)ch;
            if (k >= 65 and k <= 90)
            {
                ch += 32;
                temp += ch;
            }
            if ((k >= 97 and k <= 122) or (k >= 48 and k <= 57))
            {

                temp += ch;
            }
        }
        ans = checkPalindrome(temp);
        return ans;
    }
};