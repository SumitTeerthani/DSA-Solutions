// https://www.codingninjas.com/studio/problems/print-1-to-n_628290?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

void findallNo(vector<int> &v, int x)
{
    if (x == 0)
        return;
    v.push_back(x);
    findallNo(v, x - 1);
}

vector<int> printNos(int x)
{
    // Write Your Code Here
    vector<int> v;
    findallNo(v, x);
    reverse(v.begin(), v.end());
    return v;
}