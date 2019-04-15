#include<iostream>
#include<cmath>
using namespace std;
int main()
{	
	int q;
	cin>>q;
	while(q--)
	{
		long a,b;
		cin>>a>>b;
		cout<<floor(sqrt(b))-ceil(sqrt(a))+1<<endl;
	}
	return 0;
}