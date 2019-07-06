#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,i,c1=0,c2=0;
   string s;
   cin>>n>>s;
   for(i=0;i<n;i++)
   {
      if(s[i]=='1')
        c1++;
      else
        c2++;
   }
   if(c1!=c2)
   {
       cout<<"1"<<endl;
       cout<<s<<endl;
   }
   else
   {
       cout<<"2"<<endl;
       cout<<s[0]<<" ";
       for(i=1;i<n;i++)
       {
           cout<<s[i];
       }
       cout<<endl;
   }






    return 0;
}
