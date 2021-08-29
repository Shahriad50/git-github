#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,sum=0;
    cin>>n>>m;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>k;
        if(k<=0){
                v.push_back(abs(k));
    }
    }
    sort(v.rbegin(),v.rend());
    int l=v.size();
    if(l==0){
        cout<<0<<endl;
    }
    else{
    for(int i=0;i<min(l,m);i++){
        sum+=v[i];
    }
    cout<<sum<<endl;
    }
}
