#include<bits/stdc++.h>
using namespace std;

int previous_power_of_two(int n)
{
    if((n&&!(n&(n-1)))==1){
        return n>>1;
    }
    while(n&(n-1)){
        n=n&(n-1);
    }
    return n;
}

long int  nextPowerOfTwo ( int  n )
{
	// Result is intialized as 1
	long int value = 1;
	// The following while loop will run until we
	// get a number greater than n
	while(value<=n)
	{
		// value will be left shifted by 1 place in each iteration
		value=value << 1;
	}
	return value ;
}
int main()
{
    int n,k;
    cin>>n;
    k=previous_power_of_two(n);

    int rem=n%k;
    cout<<2*rem+1<<endl;
}
