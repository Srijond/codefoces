#include<bits/stdc++.h>
#define square 2
using namespace std;
int main()
{
    int m,n,area,i,c=0;
    cin>>m>>n;
    area=m*n;
    for(i=2;i<=area;i+=2)
    {
        if(i<=area)
        {
            c++;

        }
    }
    cout<<c<<endl;






    return 0;
}
