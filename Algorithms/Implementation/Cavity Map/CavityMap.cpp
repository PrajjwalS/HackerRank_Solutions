#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  char mat[n][n];
  for(int i=0;i<n;i++)
        cin>>mat[i];

  for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
        char k=mat[i][j];
        if(i!=0&&i!=n-1&&j!=0&&j!=n-1&&k>mat[i-1][j]&&k>mat[i][j-1]&&k>mat[i][j+1]&&k>mat[i+1][j])
          cout<<'x';
        else
          cout<<k;
      }
      cout<<endl;
    }
  }
