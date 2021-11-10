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
    int a[n];
    ll sum=0;
    map<int,int>mp;
    for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
            sum+=a[i];
        }
   int ans=0;
   if((2*sum)%n!=0){
    cout<<0<<endl;
    continue;
   }
  int k=2*sum/n;
   for(int i=0;i<n;i++){
      int a1=a[i];
      int a2=k-a1;
      if(mp.count(a2))ans+=mp[a2];
      if(a1==a2)ans-=1;
   }
   cout<<ans/2<<endl;

}
    return 0;
}
