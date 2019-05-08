#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,arr[3],i,j,k=0;
   cin>>t;
   while(t--)
   {
       int c=0;
      for(i=0;i<3;i++)
      {
          cin>>arr[i];
      }
      for(j=0;j<3;j++)
      {
         if(arr[j]==1)
         {
            c++;

         }
      }
      if(c>=2)
      {
        k++;
      }
   }
   cout<<k<<endl;





    return 0;
}
