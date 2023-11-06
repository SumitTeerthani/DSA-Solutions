class Solution
{
public:
    int myAtoi(string s)
    {
        int n = s.length();
        // Removing Spaces
        for (int i = 0; i < n; i++)
        {
            char ch = s[i];
            if (ch != ' ')
                break;
            else
            {
                s.erase(i, 1);
                i--;
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            char ch = s[i];
            if (ch != ' ')
                break;
            else
            {
                s.erase(i, 1);
                i++;
            }
        }
        // Checking For Negative
        bool isNegative = false;

        if (s[0] == '-')
        {
            isNegative = true;
            s.erase(0, 1);
            if (s[0] == '+')
                return 0;
        }
        if (s[0] == '+')
            s.erase(0, 1);

        long long int number = 0;
        for (int i = 0; i < s.length(); i++)
        {
            char ch = s[i];
            if (ch >= '0' and ch <= '9')
            {
                int temp = ch - '0';

                number = number * 10 + temp;
                if (number > pow(2, 31) - 1)
                {
                    if (isNegative)
                        return -pow(2, 31);
                    else
                        return pow(2, 31) - 1;
                }
            }
            else
                break;
        }

        if (isNegative)
            number = -number;

        return number;
    }
};