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
const int N=1e5+5;
int dx[]= {1,-1,0,0,1,-1,1,-1};
int dy[]= {0,0,1,-1,1,1, -1,-1};
int n,cnt;
char s[30][30];
int vis[30][30];

void dfs(int i, int j )
{
    if(i >= n || i < 0 || j < 0)
        return;
    if(s[i][j] != '1' || vis[i][j])  return;
   // cout<<"i = "<<i<<" j = "<<j<<" "<<s[i][j]<<endl;
    vis[i][j]=1;
    cnt++;
    for(int c=0; c<8; c++)
    {
        int x=i+dx[c];
        int y=j+dy[c];
        dfs(x,y);
    }
}
int main()
{

    int t;
    scanf("%d", &t);
    gets(s[0]);
    gets(s[0]);
    while(t--)
    {
        n = 0;
        memset(s, 0, sizeof(s));
        while(gets(s[n]))
        {
            if(s[n][0] == '\0') break;
            n++;
        }
        memset(vis, 0, sizeof(vis));
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; s[i][j]; j++)
            {
                if(vis[i][j] == 0 && s[i][j] == '1')
                {
                    cnt = 0;
                    dfs(i, j);
                    if(cnt > ans)
                        ans = cnt;
                }
            }
        }
        printf("%d\n", ans);
        if(t)
            puts("");
    }
    return 0;}
