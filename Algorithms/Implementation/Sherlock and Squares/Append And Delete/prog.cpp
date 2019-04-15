#include<iostream>

using namespace std;
int main()
{
	string s;
	string t;
	int k;
	cin>>s>>t>>k;

	int iS=0,iT=0;

	while(iS<s.size() && iT<t.size())
	{
		if(s[iS]!=t[iT])
			break;
		iS++;
		iT++;
	}
	int req= ((s.size())-iS+(t.size())-iT);
	
	int i=1;
	while(1)
	{
		if(req>=k)
			break;

		req=req+(2*i);
		i++;
	}
	
	if(req==k)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;

}