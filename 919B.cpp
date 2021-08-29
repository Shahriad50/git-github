#include<bits/stdc++.h>
using namespace std;
int cal(int k)
{
    int sum=0;
        int d=k;
        while(k){
            sum+=k%10;
            k/=10;
        }
        return sum;
}
int main()
{
    int k;
    cin>>k;
    int ans=0;
    while(k){
            ans++;
        if(cal(ans)==10)k--;
    }
    cout<<ans<<endl;
}
#include <bits/stdc++.h>

using namespace std;
#define pb push_back
typedef long long ll;
bool is(ll n){
    int ans=0;
  while(n>0){
    if(ans>10)
        return false;
    else{
        ans+=n%10;
        n/=10;
    }

  }
  if(ans==10)
    return true;
  else
    return false;
}

int main()
{
  int t,T,a,n,x;
  cin>>n;
  ll ans=19;
  for(t=1;t<n;){
        ans+=9;
    if(is(ans))
        t++;

  }
  cout<<ans;
  	return 0;
}
