#include<bits/stdc++.h>
#define ll long long
const int MOD=2019;
using namespace std;
int main()
{
   int maxvalue=-32760,maxindex;
   int minvalue=32760,minindex;
   int n,i,x;
   cin>>n;
   int a[n+1];
   for(i=1;i<=n;i++)
   {
       cin>>x;
       a[i]=x;
   }
   for(i=1;i<=n;i++)
   {
       if(a[i]>maxvalue)
       {
           maxvalue=a[i];
           maxindex=i;
       }
       if(a[i]<=minvalue)
       {
           minvalue=a[i];
           minindex=i;

       }
   }
  if(maxindex>=minindex)
  {
      cout<<(maxindex-1)+(n-minindex)-1;
  }
  else
  {
      cout<<(n-minindex)+(maxindex-1);
  }



    return 0;
}
