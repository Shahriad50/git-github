
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,sum=0,ans=0;
    cin>>n;
    vector<int>v;
   // int a[12];
    for(int i=0;i<12;i++){
        cin>>k;
        v.push_back(k);
    }
    sort(v.rbegin(),v.rend());
    for(int m=0;m<v.size();m++){
        sum+=v[m];
        ans++;
        if(sum>=n){
            break;
        }
    }
     if(n==0)cout<<0<<endl;
    else if(sum<n){
        cout<<-1<<endl;
    }

    else
    cout<<ans<<endl;
}
