#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len,ans=0,l=26;
    len=s.size();
    char cur='a';
    for(int i=0;i<len;i++){
        int d1=abs(cur-s[i]);
        int d2=l-abs(s[i]-cur);
        if(d1<d2){
            ans+=d1;
            cur=s[i];
        }
        else{
            ans+=d2;
            cur=s[i];
        }
    }
    cout<<ans<<endl;
}
