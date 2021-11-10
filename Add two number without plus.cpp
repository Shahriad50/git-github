//Add two number without using plus(+) operator


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;

    int sum=0,carry=0;
    while(b!=0){
        carry =a&b;
        sum=a^b;
        a=sum;
        b=carry<<1;
    }
    cout<<sum<<endl;

}
