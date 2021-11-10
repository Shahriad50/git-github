//Counting set bits in O(1)using Lookup table


#include<bits/stdc++.h>
using namespace std;
void initialize(int *table)
{
    table[0]=0;
    for(int i=1;i<256;i++){
        table[i]=table[i>>1]+(i&1);
    }
}
bool power_of_2(int n)
{
    if(n&(n-1)==0)return true;
    else return false;
}
int main()
{
    int table[256];
    initialize(table);
    int n;cin>>n;
    int k=n;
    int count=0;
    for(int i=0;i<4;i++){
        count+=table[n&255];
        n=n>>8;
    }
    if(power_of_2(k)){
        cout<<k<<" is a power of two"<<endl;
    }
    else{
        cout<<k<<" is not a power of two"<<endl;
    }
    cout<<count<<endl;
    }

