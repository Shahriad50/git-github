#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long  n,x,dc=0;cin>>n>>x;for(int i=0;i<n;i++)
    {
        int c;
        char s;
        cin>>s>>c;
        if(s=='+'){
            x+=c;
        }
        else if(s=='-'){
            if(c>x){
                dc++;
            }
            else{
                x-=c;
            }
        }
    }
    cout<<x<<' '<<dc<<endl;
}
