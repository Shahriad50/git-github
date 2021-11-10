//UVa 160 Factors and Factorials

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long  long int
const int N=10e9+7;

void listOfPrimes(int prime[], int upto)
{
    int i, j, k, isPrime ;

    for (k=0, i=2; i<=upto; i++)
    {
        isPrime = 1 ;
        for (j=2; j<i; j++)
        {
            if (i%j == 0)
            {
                isPrime = 0 ;
                break ;
            }
        }
        if (isPrime)
            prime[k++] = i ;
    }
}

int main()
{
    int i, j, k, n, num ;
    int prime[25], numPrimeFact[101] ;

#ifndef ONLINE_JUDGE
    //freopen("160.in", "r", stdin) ;
#endif

    listOfPrimes(prime, 100) ;
    /*
        for (k=0; k<25; k++)
            printf("%d\n", prime[k]) ;
    */

    while (scanf("%d", &n) != EOF)
    {
        if (n==0)
            break ;
        num = n ;

        for (i=0; i<=100; i++)
            numPrimeFact[i] = 0 ;

        while (n>1)
        {
            k = n ;
            for (i=0; i<25 && k>1; )
            {
                if (k%prime[i] == 0)
                {
                    k = k/prime[i] ;
                    numPrimeFact[prime[i]]++ ;
                }
                else i++ ;
            }

            n-- ;
        }

        printf("%3d! =", num) ;
        for (i=0, k=1; i<25 && prime[i]<=num; i++)
        {
            if (numPrimeFact[prime[i]]>0)
            {
                if (k==16)
                {
                    printf("\n      ") ;
                    k = 1 ;
                }
                printf("%3d", numPrimeFact[prime[i]]) ;
                k++ ;
            }
        }

        printf("\n") ;
    }


    return 0;
}


/*void primefactor(int n)
{
   vector<vector<int>>v;
   vector<int>v1;
   for(int i=2;i<=n;i++){
        int cntn=0;
    while(n%i==0){
    cntn++;
    n=n/i;
    }
   v.push_back({i,cntn});
   }
   for(int j=0;j<v.size();j++){
   for(int i=0;i<v[j].size();i++){
       for(int k=2;k<=n;k++){
            int cntk=0;
        if(v[j][i]==k){
            cntk++;
        }
       // cout<<cntk<<endl;
       v1.push_back(cntk);
       }
        //cout<<v[j][i]<<' ';
   //cout<<endl;
   }
   }
   for(int i=0;i<v1.size();i++)cout<<v1[i]<<' ';
   //cout<<endl;

}
int main()
{

{
    ll n;cin>>n;
   if(n>1){
        for(int i=2;i<=n;i++){
            primefactor(i);
        }
    }
}
    return 0;
}
*/
