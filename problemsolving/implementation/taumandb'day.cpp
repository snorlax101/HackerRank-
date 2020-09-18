#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t-->0)
    {
         long long int b,w,bc,wc,z;
         cin>>b>>w;
         cin>>bc>>wc>>z;
         long long int ans;
         if(bc>wc+z) ans=w*wc+b*(wc+z);
         else if(wc>bc+z) ans=b*bc+w*(bc+z);
         else ans=b*bc+w*wc;
         cout<<ans<<endl;
    }
}
