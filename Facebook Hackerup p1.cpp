#include<bits/stdc++.h>
using namespace std;
#define faster ios::sync_with_stdio(0);
int a[26];
int main()
{
    //freopen("input.txt","rt",stdin);
    //freopen("output.txt","wt",stdout);
    faster;
    int t;
    cin>>t;
    //int a[26];
    //for(int i=0;i<26;i++)a[i]=0;
    for(int i=1; i<=t; i++)
    {
        string s;
        cin>>s;
        int ans=0,v=0,con=0;
        int len=s.length();
        sort(s.begin(),s.end());

        map<char,int>mp;
        map<char,int>mp1;

        map<char,int>::iterator it;
        map<char,int>::iterator it1;
        for(int i=0; i<len; i++)
        {

            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                mp[s[i]]++;
                v++;
                s[i]=0;
            }
            else
            {
                mp1[s[i]]++;
                con++;
                s[i]=1;
            }
        }
        int x=0;
        char ch;
        for(it=mp.begin(); it!=mp.end(); it++)
        {
            if(it->second>x)
            {
                x=it->second;
                ch=it->first;
            }
        }
         int y=0;
        char ch1;
        for(it1=mp1.begin(); it1!=mp1.end(); it1++)
        {
            if(it1->second>y)
            {
                y=it1->second;
                ch1=it1->first;
            }
        }
        //int mx=max(x,y);
        ans=con+(v-x)*2;
        int ans1=v+(con-y)*2;
        ans=min(ans,ans1);



       /* if(len==1)
        {
            cout<<"Case #"<<i<<": "<<0<<endl;
        }
        else
        {
            if(v==0||con==0)
                cout<<"Case #"<<i<<": "<<len<<endl;
            else if(x>1)
            {
                if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
                {
                    v-=x;
                }
                else
                {
                    con-=x;
                }
                ans=con+v*2;
                cout<<"Case #"<<i<<": "<<ans<<endl;

            }
            else
            {
                v--;
                ans=con+v*2;


                cout<<"Case #"<<i<<": "<<ans<<endl;
            }
        }*/
        cout<<"Case #"<<i<<": "<<ans<<endl;

    }

}
