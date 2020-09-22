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
int a[1005],b[1005];
int dp[1005][35];
int n;
int solve(int i,int rem)
{
    if(i==n)
        return 0;

    if(dp[i][rem]!=-1)
        return dp[i][rem];

    int ch1=solve(i+1,rem);
    int ch2=0;
    if(rem>=a[i])
    {
        ch2=solve(i+1,rem-a[i])+b[i];
    }
    return dp[i][rem]=max(ch1,ch2);
}
int main()
{
    fast();
    int t =D();
    while(t--)
    {
        n=D();
        memset(dp,-1,sizeof dp);
        for(int i=0; i<n; ++i)
        {
            b[i]=D();
            a[i]=D();
        }
        int g=D(),sum=0;
        while(g--)
        {
            int x=D();
            memset(dp,-1,sizeof dp);
            sum+=solve(0,x);
        }
        cout<<sum<<endl;
    }

}
