// https://www.codingninjas.com/studio/problems/hcf-and-lcm_840448?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION

int calcGCD(int a, int b)
{
    // // Write your code here.
    // int limit=min(n,m);
    // int ans=1;
    // for(int i=1;i<=limit;i++){
    //     if(n%i==0 and m%i==0)
    //     ans=i;
    // }
    // return ans;

    while (a > 0 and b > 0)

    {

        if (a > b)

            a = a % b;

        else

            b = b % a;
    }

    if (a == 0)

    {

        return b;
    }

    else

        return a;
}