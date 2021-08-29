
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s;
    cin>>n>>s;
   string s1,s2;
    if(s==0){
            if(n==1){
                cout<<"0 0"<<endl;
            }
            else
        cout<<-1<<" "<<-1<<endl;
    }
    else{
    for(int i=1;i<=n;i++)
    {
       int k=min(9,s);
       s1.push_back('0'+k);
       s-=k;
    }
    if(s>0)cout<<"-1 -1"<<endl;
    else{
        for(int i=n-1;i>=0;i--){
            s2.push_back(s1[i]);
        }
        int j=0;
        while(s2[j]=='0'){
           j++;
        }
        s2[0]++;
        s2[j]--;
        cout<<s2<<" "<<s1<<endl;
    }
    }

}
