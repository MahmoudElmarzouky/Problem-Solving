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
int arr[100005];
int main()
{
    fast();
    long double n,b;
    while(cin>>n>>b)
    {
        double x=pow(b,(1.0/n));
        cout<<fixed<<setprecision(0)<<x<<endl;
    }
}
