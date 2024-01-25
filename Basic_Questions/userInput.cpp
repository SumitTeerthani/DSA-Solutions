
// https://www.codingninjas.com/studio/problems/find-character-case_58513?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

#include <iostream>
using namespace std;

int main()
{
    // Write your code here
    char ch;
    cin >> ch;
    int k = ch;
    if (k >= 97 and k <= 122)
        cout << 0;
    else if (k >= 65 and k <= 90)
        cout << 1;
    else
        cout << -1;
}
