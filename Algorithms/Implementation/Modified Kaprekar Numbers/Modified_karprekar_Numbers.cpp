#include<iostream>
#include<cmath>
using namespace std;
#define ulli unsigned long long int
int main()
{
  ulli p,q;
  cin>>p>>q;
  bool rangeFlag=false;
  for(ulli i=p;i<=q;i++)
  {
    ulli dummy=i;
      // to count number of digits in i
      ulli d=0;
        while(dummy>0)
          {dummy=dummy/10;
            d++;
          }
      dummy=i*i;
     
      if(i== (ulli)((ulli)dummy/(ulli)pow(10,d))+(ulli)((ulli)dummy%(ulli)pow(10,d)) )
      {
        
          cout<<i<<" ";
          rangeFlag=true;
        
      }



  }
  if(rangeFlag==false)
    cout<<"INVALID RANGE"<<endl;
}
