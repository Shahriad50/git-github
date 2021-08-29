#include<bits/stdc++.h>
using namespace  std;
int main()
{
    int n,d;
    cin>>n>>d;
    long long ans=0,m[n],s[n];
    for(int i=0;i<n;i++){
        cin>>m[i]>>s[i];
    }
    sort(m,m+n);
    cout<<ans<<endl;

}
