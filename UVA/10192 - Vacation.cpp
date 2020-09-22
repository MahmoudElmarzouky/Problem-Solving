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
int dp[105][105];
string s1,s2;
int solve(int i,int j)
{
    if(i==s1.length()||j==s2.length())
    {
        return 0;
    }
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
    if(s1[i]==s2[j])return 1+solve(i+1,j+1);
    return dp[i][j]=max(solve(i+1,j),solve(i,j+1));
}
int main()
{
    fast();
    int cnt=1;
    while(true)
    {
        memset(dp,-1,sizeof dp);
        getline(cin,s1);
        if(s1=="#")break;
        getline(cin,s2);
        cout<<"Case #"<<cnt<<": you can visit at most "<<solve(0,0)<<" cities."<<endl;
     cnt++;
    }
}
