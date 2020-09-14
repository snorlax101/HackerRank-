#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
int main()
{
   vector<long long int> v;
   map<long long int, int> c;
   long long int k,n,x,sum=0;
   cin>>n>>k;
   for(int i=0;i<n;i++)
   {
       cin>>x;
       v.push_back(x);
       c[x%k]++;
   }
   if(k%2==0) c[k/2]=min(c[k/2],1);
   for(int i=0;i<k;i++)
   {
       if(i==0) sum+=min(c[0],1);
       else if(i>0 && i<=k/2) sum+=max(c[i],c[k-i]);
   }
   cout<<sum<<endl;
    
}
