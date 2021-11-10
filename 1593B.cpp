//Make it divisible by 25

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
    string n;cin>>n;
    int len =n.size();
    int ans=20;
    for(int i=0;i<len;i++){
            for(int j=i+1;j<len;j++){
                int cur=(n[i]-'0')*10+(n[j]-'0');
                if(cur%25==0){
                    ans=min(ans,len-i-2);
                }
            }
    }
    cout<<ans<<endl;
}
    return 0;
}
