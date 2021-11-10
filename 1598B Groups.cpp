//1598 B Groups


#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long  long int
const ll INF=10e9+7;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--)
{
    int n;cin>>n;
    int a[n][5];
    bool ok=false;
    for(int day=0;day<n;day++)
    {
          int cnt1=0;
        for(int i=0;i<5;i++ )
        {
            cin>>a[day][i];

        }

    }

    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<n;j++){
           int x=0,y=0,xy=0,xyc=0;
           for(int k=0;k<n;k++){
            if(a[k][i]==1&&a[k][j]==1)xy++;
            else if(a[k][i]==1&&a[k][j]==0)x++;
            else if(a[k][i]==0&&a[k][j]==1)y++;
            else xyc++;
           }
            if (xyc>0) continue;
        if (x > n/2) continue;
        if (y > n/2) continue;
        if (x + xy >= n/2 && y + xy >= n/2) {
          ok = true;
        }
        }
    }
   if(ok)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;

}
    return 0;
}
