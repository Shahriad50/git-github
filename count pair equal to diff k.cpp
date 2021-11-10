#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>&v, int low, int high, int x)
{
    if (high >= low)
    {
        int mid = low + (high - low)/2;
        if (x ==v[mid])
            return mid;
        if (x > v[mid])
            return binarySearch(v, (mid + 1), high, x);
        else
            return binarySearch(v, low, (mid -1), x);
    }
    return -1;
}

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    vector<int>v;
    v.push_back(a[0]);
    int cur=a[0];
    for(int i=1;i<n;i++){
    if(a[i]!=cur){
            v.push_back(a[i]);
     }       cur=v[i];
        }
    int count=0;
    for(int i=0;i<v.size()-1;i++){
        if(binarySearch(v,i+1,v.size()-1,v[i]+k)!=k)count++;
    }
    cout<<count<<endl;

}
