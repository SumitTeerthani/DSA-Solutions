class Solution
{
public:
    bool isHappy(int n)
    {

        bool isOne = false;
        int k = 1000;
        while (k > 0)
        {
            int temp = 0;
            while (n > 0)
            {
                int k = n % 10;
                temp = temp + (k * k);
                n = n / 10;
            }
            n = temp;
            if (temp == 1)
            {
                isOne = true;
                break;
            }
            k--;
        }
        return isOne;
    }
};