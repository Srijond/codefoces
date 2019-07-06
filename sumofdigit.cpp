#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len=s.size();
    int i,sum,cnt=0;
    while(len>1)
    {
        sum=0;
        for(i=0;i<len;i++)
            {
                sum+=s[i]-'0';
            }
        s=to_string(sum);
        len=s.size();
        cnt++;

    }
    cout<<cnt<<endl;










    return 0;
}
