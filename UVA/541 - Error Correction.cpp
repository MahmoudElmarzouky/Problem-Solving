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
 int a[105][105];
int main()
{
    int n;
    cin>>n;
    while(n){

            int r,c,corrupted_rows=0,corrupted_columns=0,counter;
        for(int i=0;i<n;i++){
                 counter=0;
            for(int j=0;j<n;j++){
                cin>>a[i][j];
                if(a[i][j])
                counter++;
            }
        if(counter%2!=0){
            corrupted_rows++;
                r=i+1;

        }
        }
            for(int i=0;i<n;i++){
                 counter=0;
            for(int j=0;j<n;j++){

                if(a[j][i])
                counter++;
            }
        if(counter%2!=0){
            corrupted_columns++;
                c=i+1;

        }
            }

        if(corrupted_columns==1 && corrupted_rows==1)
            cout<<"Change bit ("<<r<<","<<c<<")"<<endl;
        else if(corrupted_columns==0 && corrupted_rows==0)
            cout<<"OK"<<endl;
        else
            cout<<"Corrupt"<<endl;
        cin>>n;
    }
    return 0;
}
