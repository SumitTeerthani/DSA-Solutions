
// https://www.codingninjas.com/studio/problems/nth-fibonacci-number_74156?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
     *  Write your code here.
     *  Read input as specified in the question.
     *  Print output as specified in the question.
     */
    int n;
    cin >> n;
    int curr, prev, prevtwo;
    if (n == 1 or n == 2)
    {
        cout << 1;
    }
    else
    {
        prev = 1;
        prevtwo = 1;
        for (int i = 3; i <= n; i++)
        {
            curr = prev + prevtwo;
            prevtwo = prev;
            prev = curr;
        }
        cout << curr;
    }
    return 0;
}
