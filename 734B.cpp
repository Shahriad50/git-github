#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n2,n3,n5,n6;
    cin>>n2>>n3>>n5>>n6;
    vector<int>v;
    v.push_back(n2);
    v.push_back(n5);
    v.push_back(n6);
    int mn=*min_element(v.begin(),v.end());
    n2=n2-mn;
    int mn2=min(n2,n3);
    cout<<(256*mn)+(32*mn2)<<endl;
}
