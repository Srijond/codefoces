#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i;
    cin>>n>>k;
    char s[50];
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(i+1==k)
        {
            char a=s[i];
            a+=32;
            cout<<a;
        }
        else
            cout<<s[i];
    }



    return 0;
}
