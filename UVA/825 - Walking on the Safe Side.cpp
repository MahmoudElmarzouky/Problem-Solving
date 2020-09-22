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
int dp[1005][1005];
int a[1005][1005];
int n,m;
bool valid(int x,int y)
{
    return (x>=0&&x<n&&y>=0&&y<m);
}
int solve(int i, int  j)
{
    if(i==n-1&&j==m-1)
    {
        return 1;
    }
    if(dp[i][j]!=-1)
        return dp[i][j];
    int x=0;
    int y=0;
    dp[i][j]=0;
    if(valid(i+1,j)&&a[i][j]==0)
    {
        x=solve(i+1,j);
    }
    if(valid(i,j+1)&&a[i][j]==0)
    {
        y=solve(i,j+1);
    }
    return dp[i][j]+=x+y;
}
int main()
{
    fast();
    int t=D();
    bool f = false;
    int cnt=1,tt=t;
    while(t--)
    {
        memset(dp,-1,sizeof dp);
        memset(a,0,sizeof a);
        n=D(),m=D();
        string s;
        getline(cin,s);
        for( int i = 0 ; i < n ; i++ )
        {
            getline(cin,s);
            stringstream sin(s);
            int p, q;
            sin >> p;
            while(sin >> q)
            {
                a[p-1][q-1]=1;
            }
        }
        printf("%d\n",solve(0,0));
        if(t)
            puts("");
    }
}
