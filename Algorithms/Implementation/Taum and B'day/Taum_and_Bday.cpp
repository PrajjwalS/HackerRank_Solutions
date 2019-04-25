#include<iostream>
using namespace std;
#define lli long long int
int main()
{
  int t;
  cin>>t;
    while(t--)
    {
      lli b,w,bc,wc,z;
      cin>>b>>w>>bc>>wc>>z;
      if(bc<wc && (bc+z)<wc)
        wc=(bc+z);
      else if(wc<bc && (wc+z)<bc)
        bc=(wc+z);
      cout<<(bc*b+wc*w)<<endl;
    }

}
