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
const int N=1e6+5;
bitset<N> is_prime;
void sieve(){
    is_prime.set();
    is_prime[0] = is_prime[1] = 0;
    for(ll p = 2 ; p <= N/p ; ++p)
        if(is_prime[p])
            for(ll m = p*p ; m < N ; m += p)
                is_prime[m] = 0;
}
ll cm[N];
bool check(int n){
string s,s1,s2="";
s=s1=conIntToString(n);
for(int i=1;i<s1.length();++i){
     s2+=s[i];
}
s2+=s[0];
int x=conStringToInt(s2);
if(!is_prime[x])
    return 0;
else {
 s=s2;
 s2="";
}
while(s!=s1)
{
    for(int i=1;i<s1.length();++i){
     s2+=s[i];
}
s2+=s[0];
int x=conStringToInt(s2);
if(!is_prime[x])
    return 0;
s=s2;
s2="";
}
return 1;
}
void solve(){
for(int i=0;i<1000005;++i){
    if(is_prime[i]&&check(i)){
            cm[i]=1;
    }
}
}
int main(){
    sieve();
    solve();
    for(int i=1;i<=1000001;++i){
       cm[i]+=cm[i-1];
    }
    int x,y;
    while(cin>>x&&x!=-1&&cin>>y){
        int ans=cm[y]-cm[x-1];
        if(ans==0){
            cout<<"No Circular Primes.\n";
        }else{
            if(ans==1)
          cout<<"1 Circular Prime.\n";
          else
          cout<<ans<<" Circular Primes.\n";
    }
    }
}
