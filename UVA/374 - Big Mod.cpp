/*
** author:mahmoud magdy
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void fast()
{
    ios_base :: sync_with_stdio( 0 ) ;
    cin.tie( 0 ) ;
    cout.tie( 0 ) ;
}
inline int D()
{
    int m ;
    scanf("%d",&m);
    return m ;
}
inline ll lD()
{
    ll m ;
    scanf("%lld",&m);
    return m ;
}
inline double dD()
{
    double m ;
    scanf("%llf",&m);
    return m ;
}
ll LCM(ll a, ll b)
{
    return a / __gcd(a, b) * b;
}
ll power(ll a, ll b, ll m){
    if(!b)  return 1;
    ll t = power(a, b>>1, m)%m;
    return ((t*t)%m * (b&1 ? a : 1)%m)%m;
}
int main()
{
  ll a , b , m;
  while(cin>>a>>b>>m){
    ll ans=power(a,b,m);
    cout<<ans<<endl;
  }
}
