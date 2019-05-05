#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
  string str;
  getline(cin,str);
  set<char>s;
  int i=-1;
  while(str[++i]!='\0')
  {
    if(str[i]==' ')
    { }
    else if(str[i]<97)
    {
      s.insert(str[i]+32);
    }
    else
    {
      s.insert(str[i]);
    }

  }
  set<char>::iterator it;
  for(it=s.begin();it!=s.end();it++)
    cout<<*it<<endl;
  if(s.size()==26)
    cout<<"pangram"<<endl;
  else
    cout<<"not pangram"<<endl;
    return 0;
}
