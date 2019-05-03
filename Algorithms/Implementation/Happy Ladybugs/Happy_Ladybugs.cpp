#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main()
{
	int g;
	cin>>g;
	while(g--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		map<char,int>m;
		int i=-1;
		bool ans=true;
		while(s[++i]!='\0')
		{	
			if(i>0 && i <s.size()-1 && (s[i]!=s[i+1]&&s[i]!=s[i-1]))
			{
				ans=false;
			}	
			m[s[i]]++;
		}
			if(1<s.size()&&(s[0]!=s[1]  || s[s.size()-1]!=s[s.size()-2]))
				ans=false;

		
		
			if(m['_']>0)
				ans=true;
			map<char,int>::iterator it;
			for(it=m.begin();it!=m.end();it++)
			{
				if(it->first!='_'&& it->second<=1)
				{
					ans=false;
					break;
				}


			}
		
			
			
		
		if(ans==true)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;		
	}
}