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
string s ;
int dp[1005][1005];
int solve(int i , int j){
if(i>=j)
    return 0;
if(dp[i][j]!=-1)return dp[i][j];
int ch1=solve(i+1,j-1)+(s[i]!=s[j]);
int ch2=solve(i+1,j)+1;
int ch3=solve(i,j-1)+1;
return dp[i][j]=min({ch1,ch2,ch3});
}
int main()
{
    fast();
    int t =D(),i=1;
    while(t--)
    {
     cin>>s;
     memset(dp,-1,sizeof dp);
     cout<<"Case "<<i++<<": "<<solve(0,s.length()-1)<<endl;
     }
}
