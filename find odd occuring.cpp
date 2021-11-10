#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int b=0;
    for(int i=0;i<n;i++)b=b^a[i];
    int xor_zero=0,xor_non_zero=0;
    int setbit=(b&~(b-1));
    for(int i=0;i<n;i++){
        if((a[i]&setbit)!=0)xor_zero^=a[i];
        else xor_non_zero^=a[i];
    }
    cout<<xor_zero<<" "<<xor_non_zero<<endl;
}
