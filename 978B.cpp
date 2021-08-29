
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
       int n;
        cin>>n;
        string s;
        cin>>s;
      int pos=0,cnt=0,cntx=0,ans=0;
        for(int i=0;i<n;i++){
           if(s[i]=='x'){
               if(cntx<2)
               cntx++;
               else {
                    ans++;
               }
            }
            else{
                cntx=0;
            }
        }
         cout<<ans<<endl;
    }
