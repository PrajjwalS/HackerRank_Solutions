#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];

	int currPos=0;
	int count=0;
	while(currPos!=n-1)
	{
		if(a[currPos+2]==0)
			currPos+=2;
		else
			currPos++;
		count++;
	}
	cout<<count<<endl;

return 0;
}