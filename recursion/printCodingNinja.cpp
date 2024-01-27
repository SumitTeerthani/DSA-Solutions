// https://www.codingninjas.com/studio/problems/-print-n-times_8380707?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

void print(vector<string> &s, int n, string p)
{
    if (n == 0)
        return;
    s.push_back(p);
    print(s, n - 1, p);
}

vector<string> printNTimes(int n)
{
    // Write your code here.
    vector<string> s;
    string p = "Coding Ninjas";
    print(s, n, p);
    return s;
}