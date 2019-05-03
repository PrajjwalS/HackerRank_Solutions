#include<iostream>
using namespace std;
int main()
{
	int q;
	cin>>q;
	while(q--)
	{
		string str;
		cin>>str;
		char current=str[0];
		int i=0,trip=0,total=0;
		while(str[++i]!='\0')
		{
			if(str[i]==current)
				trip++;
			else
			{
				total+=trip;
				trip=0;
				current=str[i];
			}	
		}
		total+=trip;
		cout<<total<<endl;
	}

}