#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j;
    cin>>n;
    int score[n];
    for(i=0;i<n;i++) cin>>score[i];
    cin>>m;
    int alice[m];
    for(j=0;j<m;j++) cin>>alice[j];
    int rank[n];
    for(i=0;i<n;i++)
    {
        if(i==0) rank[i]=1;
        else
        {
            if(score[i]==score[i-1]) rank[i]=rank[i-1];
            else rank[i]=rank[i-1]+1;
        }
    }
    int r=n-1,res;
    for(i=0;i<m;i++) 
    {
        res=0;
        while(r>=0 && alice[i]>score[r]) 
        {
            r--;
        }
        if(r==-1) res=1;
        else if(alice[i]==score[r]) res=rank[r];
        else if(alice[i]<score[r]) res=rank[r]+1;

        cout<<res<<endl;

    }
}
