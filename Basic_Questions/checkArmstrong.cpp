// https://www.codingninjas.com/studio/problems/check-armstrong_589?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

bool checkArmstrong(int n)
{
    // Write your code here
    int sum = 0;
    int temp = n, temp2 = n, digits = 0;
    while (temp != 0)
    {
        digits++;
        temp = temp / 10;
    }
    while (n != 0)
    {
        int k = n % 10;
        sum += pow(k, digits);
        n = n / 10;
    }
    if (sum == temp2)
        return true;

    return false;
}
