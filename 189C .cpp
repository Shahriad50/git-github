#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,ans=0;
    cin>>n>>a>>b>>c;
    int x,y;
    for(x=0;x<=n;x++){
        for(y=0;y<=n;y++){
           int zc=n-(x*a+y*b);
            if(zc<0)break;
            double z=zc/(double)c;
            if(z==(int)z)
            ans=max(ans,((int)z+y+x));
        }
    }
    cout<<ans<<endl;


    }
