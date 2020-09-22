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
int conStringToInt(string str){
 stringstream geek(str);
    int x = 0;
    geek >> x;
return x;
}
string conIntToString(int n){
stringstream ss;
ss << n;
string str = ss.str();
return str;
}
vector<pair<int,int>>v;
int main(){
int n=D();
while(n--){
    int a=D(),b=D();
  if(a<b||(a%2!=0&&b%2==0)||(a%2==0&&b%2!=0))
    cout<<"impossible\n";
  else{
   if(b==0)
    cout<<a/2<<" "<<a/2<<endl;
    else
    {
        int x=1,y=a-1;
        while(1){
            if(abs(y-x)==b){
                cout<<y<<" "<<x<<endl;
            break;
            }
            x++,y--;
        }
    }
  }
}
}
