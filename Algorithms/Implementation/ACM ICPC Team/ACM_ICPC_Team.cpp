#include<iostream>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  char a[n][m];
  //input
  for(int i=0;i<n;i++)
    cin>>a[i];
  // -->
  int max_count=0,totalTeam=0;
  for(int i=0;i<n-1;i++)
    {
      for(int j=i+1;j<n;j++)
        {
          int count=0;
            for(int k=0;k<m;k++)
              {
                if(a[i][k]=='1' || a[j][k]=='1')
                  count++;
              }
          if(count==max_count)
                totalTeam++;
          if(count>max_count)
            {
              max_count=count;
              totalTeam=1;
            }

        }
    }
    cout<<max_count<<endl<<totalTeam<<endl;
}
