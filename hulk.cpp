#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,i;
  string s1,s2,s3;
  s1="I hate that ";
  s2="I love that ";
  cin>>n;

  for(i=1;i<n;i++)
  {
      if(i%2==0)
      {
          s3+=s2;
      }
      else
      {
          s3+=s1;

      }
  }
  if(n%2==0)
  {
      s3+="I love it ";
  }
  else
  {
      s3+="I hate it ";
  }
  if(n==1)
    cout<<"I hate it"<<endl;
  else
  {
      cout<<s3;
  }

    return 0;
}
