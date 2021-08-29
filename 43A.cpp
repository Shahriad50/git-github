#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define ppb         pop_back
#define endl        '\n'
#define mii         map<ll,ll>
#define msi         map<string,ll>
#define mis         map<ll, string>
#define rep(i,a,b)    for(ll i=a;i<b;i++)
#define repr(i,a,b) for(ll i=b-1;i>=a;i--)
#define trav(a, x)  for(auto& a : x)
#define pii         pair<ll,ll>
#define vi          vector<ll>
#define vii         vector<pair<ll, ll>>
#define vs          vector<string>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (ll)x.size()
#define hell        1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define display(x) trav(a,x) cout<<a<<" ";cout<<endl;
#define FAST ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
#define PI 3.141592653589793
#define N  200005
int cnt[100];
int main()
{
    FAST;
    int t,ans1=1,ans2=0;
    cin>>t;
    vector<string>s;
    cin>>s[0];
    string k1,k=s[0];
    for(int i=1;i<t;i++){
        cin>>s[i];
        if(s[i]==s[i-1])ans1++;
        else {
                ans2++;
                k1=s[i];
        }

    }
    if(ans1>ans2)cout<<k<<endl;
    else{
        cout<<k1<<endl;
    }
}


