// 1593. All are same

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
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    if(v[0]==v[n-1]){
        cout<<-1<<endl;
        continue;
    }
    int dif=v[1]-v[0];
    for(int i=1;i<n;i++){
        dif=__gcd(dif,v[i]-v[i-1]);
    }
    cout<<dif<<endl;
}
    return 0;
}
