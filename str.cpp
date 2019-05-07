#include <bits/stdc++.h>

using namespace std;


int main()
{
   int n,k,i,c=0,j,a=1;
   cin>>n>>k;
   int arr[100];
   for(i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   for(j=0;j<n;j++)
   {if(arr[j]!=0)
   {


       if(arr[k-1]<=arr[j])
       {
           c++;
       }}
       else{
        a=0;
       }
   }
   if(c>0)
   {
     cout<<c<<endl;
   }
   else
   cout<<a<<endl;



   return 0;
}
