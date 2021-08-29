#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    long long a[n],b[m],sum[n];
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
            }
    for(int i=1; i<=m; i++)
    {
        cin>>b[i];
    }
    long long  k=1,q=0;
    for(int j=1; j<=m; j++)
    {
        while(b[j]>a[k]+q)
        {
            q+=a[k++];
        }
        cout<<k<<" "<<b[j]-q<<endl;;

    }
}


