#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        vector<int>v;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++){
            if(i==0||a[i]!=a[i-1]){
                v.push_back(a[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(i>0 && a[i]==a[i-1])v.push_back(a[i]);
        }
        for(int x:v){
                cout<<x<<" ";
        }
        cout<<endl;


    }
}
