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
int  n, k ;
int a[100005];
int dp[10005][200];
int fix(int n)
{
    return (n % k + k) % k;
}
bool solve(int i,int mod)
{
    if(dp[i][mod]!=-1)return 0;
    if(i==n)
        return  dp[i][mod]=(mod==0);
    if(solve(i+1,fix(mod+a[i]))||solve(i+1,fix(mod-a[i])))
        return dp[i][mod]=1;
    return dp[i][mod]=0;
}
int main()
{
    fast();
    int t=D();
    while(t--)
    {
        memset(dp,-1,sizeof dp);
        n=D(),k=D();
        for(int i=0; i<n; ++i)
        {
            a[i]=D();
        }
        if(solve(0,0))cout<<"Divisible"<<endl;
        else cout<<"Not divisible"<<endl;
    }
}
