/*
** author:mahmoud magdy
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

inline int D()
{
    int m ;
    cin>>m;
    return m ;
}
inline ll lD()
{
    ll m ;
    cin>>m;
    return m ;
}
inline double dD()
{
    double m;
    cin>>m;
    return m;
}
void fast()
{
    ios_base :: sync_with_stdio( 0 ) ;
    cin.tie( 0 ) ;
    cout.tie( 0 ) ;
}
int a[105];
int dp[105][50005];
int n,total;
int solve(int i,int sum)
{
    if(i==n)return abs(sum-(total-sum));
    if(dp[i][sum]!=-1)return dp[i][sum];
    return dp[i][sum]=min(solve(i+1,sum),solve(i+1,sum+a[i]));
}
int main()
{
    fast();
    int t =D();
    while(t--)
    {
        n=D();
        memset(dp,-1,sizeof dp);
        total=0;
        for(int i=0; i<n; ++i)
        {
            a[i]=D();
            total+=a[i];
        }
        cout<<solve(0,0)<<endl;
    }
}
