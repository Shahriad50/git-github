#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int a[n]= {0};
    for(int i=1; i<=n; i++)
    {
        int k;
        cin>>a[i];
        a[i]=a[i]+a[i-1];
        sum+=k;
    }
    int q;
    cin>>q;
    int x;
    // cin>>x;
    for(int j=0; j<q; j++)
    {
        cin>>x;
        int p = lower_bound(a + 1, a + 1 + n, x) - a;
        cout<<p<<endl;
       /* for(int i=1; i<=n; i++)
        {

            if(a[i-1]<x&&a[i]>=x)
            {
               /* if(i==1)
                {
                    cout<<i<<endl;
                }
                else
                {
                    cout<<i<<endl;
               // }
                break;
            }
            else{
                continue;
            }*/
    }

}

