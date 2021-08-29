#include<bits/stdc++.h>
using namespace std;
int n,m;
int main()
{
     freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int len=n+m;
     while (scanf("%d %d",&n,&m) != EOF)
    {
    if(n>m){
        int k=n-m;
        while(k){
            cout<<'B';
            k--;
        }
        for(int i=1;i<=m+m;i++){
            if(i%2==0){
                cout<<'B';
            }
            else{
                cout<<'G';
            }
    }
    cout<<endl;

    }
    else if(n<m){
        int d=m-n;
        while(d){
            cout<<'G';
            d--;
        }
        for(int i=1;i<=n+n;i++){
            if(i%2==0){
                cout<<'B';
            }
            else{
                cout<<'G';
            }
    }
    cout<<endl;
    }
    else{
    for(int i=1;i<=len;i++){
            if(i%2==0){
                cout<<'B';
            }
            else{
                cout<<'G';
            }
    }
    cout<<endl;
    }
}
}
