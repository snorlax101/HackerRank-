#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main()
{
   int t;
   cin>>t;
   cin.ignore();
   while(t-->0)
   {
       string s;
       getline(cin,s);
       stack<char> c;
       for(int i=0;i<s.length();i++)
       {
           if(s[i]=="("||s[i]=="{"||s[i]=="[") c.push(s[i]);
           else if(s[i]==")"||s[i]=="}"||s[i]=="]")
           {
               if(c.top()=="(" && s[i]==")") c.pop();
               else if(c.top()=="{" && s[i]=="}") c.pop();
               else if(c.top()=="[" && s[i]=="]") c.pop();
               else break;
           }
        }
        if(c.empty()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
   }
}
