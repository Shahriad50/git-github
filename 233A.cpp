#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    vector<int>v,v1;
    if(t==1||t%2==1)cout<<-1<<endl;
    else{
    for(int i=1;i<=t;i++){
        if(i%2==1){
            v.push_back(i);
        }
        else{
            v1.push_back(i);
        }
    }
    for(int j=0;j<v.size();j++){
        cout<<v1[j]<<' '<<v[j]<<' ';
    }
    cout<<endl;
    }
}

