// https://www.codingninjas.com/studio/problems/sum-of-all-divisors_8360720?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

// int sum(int n){
// 	int sol=0;
// 	for(int i=1;i<=n;i++){
// 		if(n%i==0)
// 		sol+=i;
// 	}
// 	return sol;
// }

int sumOfAllDivisors(int n)
{
    // Write your code here.
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += (n / i) * i;
    }
    return ans;
}