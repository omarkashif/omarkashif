#include<bits/stdc++.h>
using namespace std;
int dp[100];
int count1;
int climbStairs(int n)
{
    if(n == 0 || n == 1 || n==2 )
        dp[n] = n;
    else if(dp[n]!=-1){}
    else
         dp[n] =  climbStairs(n-1) + climbStairs(n-2) ;
    return dp[n];
}
int main()
{
    int n; cin>>n;
    for(int i = 0 ; i<100 ; i++)
    {
        dp[i] = -1;
    }
    cout<<climbStairs(n)<<"\n";
    return 0;
}
