#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int n,k;
  cin>>n>>k;
  int a[n+1];
  for(int i=1;i<=n;i++)
    cin>>a[i];

  int Spage=0,Epage=0,total=0;
  for(int i=1;i<=n;i++)
  {
    Spage=Epage+1;
    Epage=Spage+ceil((float)a[i]/(float)k)-1;

    int Sprob=1;
    int Eprob;
      for(int j=Spage;j<=Epage;j++)
      {
          if(j!=Epage)
            Eprob=Sprob+k-1;
          else
            Eprob=a[i];

          if(j>=Sprob && j<=Eprob)
              total++;

          Sprob=Eprob+1;
      }
  }
  cout<<total<<endl;

return 0;
}
