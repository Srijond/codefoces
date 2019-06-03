#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[2002],i,n,j,sum=0,sum1=0;
    cin>>n;
    for(i=0;i<(2*n);i++)
    {
        cin>>a[i];
    }
    sort(a,a+(2*n));
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    for(j=i;j<(2*n);j++)
    {
        sum1+=a[j];
    }
    if(sum!=sum1)
    {
       for(i=0;i<(2*n);i++)
       {
           cout<<a[i]<<" ";
       }
    }
    else
        cout<<"-1";








    return 0;
}
