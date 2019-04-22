#include<iostream>
using namespace std;
int main()
{
  int N;
  cin>>N;
  int a[N];
  int sum=0;
  for(int i=0;i<N;i++)
  {
    cin>>a[i];
    sum+=a[i];
  }

  if(sum%2!=0)
  {
    cout<<"NO"<<endl;
    return 0;
  }

  else
  {
    int total=0;
    for(int i=0;i<N;i++)
    {
      if(a[i]%2!=0)
      {
        for(int j=i+1;j<N;j++)
        {
          if(a[j]%2!=0)
          {
            total+=2*(j-i);
            i=j;
            break;
          }
        }
      }
    }
    cout<<total<<endl;
  }
 return 0;
}
