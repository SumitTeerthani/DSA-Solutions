// https://www.codingninjas.com/studio/problems/sum-of-even-odd_624650?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

#include <iostream>
using namespace std;

int main()
{
    // Write your code here
    int n;
    cin >> n;
    int even = 0, odd = 0;
    while (n != 0)
    {
        int k = n % 10;
        if (k % 2 == 0)
            even += k;
        else
            odd += k;
        n = n / 10;
    }
    cout << even << " " << odd;
    return 0;
}
