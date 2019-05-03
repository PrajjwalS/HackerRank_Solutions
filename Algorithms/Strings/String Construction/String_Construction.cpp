#include<iostream>
#include<set>
using namespace std;
int main()
{
		int n;
		cin>>n;
		while(n--)
		{
			string str;
			set<char>s;
			cin>>str;
			int i=-1;
			int totalCost=0;
			while(str[++i]!='\0')
			{
				if(s.count(str[i]))
					continue;
				
				totalCost++;
				s.insert(str[i]);

			}
			cout<<totalCost<<endl;
		}
return 0;
}