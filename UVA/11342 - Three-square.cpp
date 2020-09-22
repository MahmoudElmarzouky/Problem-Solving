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

int main()
{
  int n=D();
  while(n--){
    int k=D(),a,b,c,i,j;
    int f=false;
    for(i=0;i*i<k;++i)
    {
         a=i*i;
        for(j=0;j*j<k-a;++j){
             b=j*j;
            c=sqrt(k-a-b);
            if(a+b+c*c==k){
                f=true;
                break;
                }
        }
         if(f)
            break;
    }if(f)
    cout<<i<<" "<<j<<" "<<c<<endl;
    else
        cout<<-1<<endl;
  }
}
