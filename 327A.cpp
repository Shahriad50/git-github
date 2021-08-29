#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt1=0,cnt0=0,max0=-1;
    cin>>n;
    int a;
   // vector<int>v;
    //for(int i=0; i<n; i++)
    while(n--){
        // int a[n];
        cin>>a;
        if(a==1){
            cnt1++;
        if(cnt0>0){
            cnt0--;
        }
        }
        if(a==0){
            cnt0++;
            if(cnt0>max0)
                max0=cnt0;
        }
    }
    cout<<cnt1+max0<<endl;
}
