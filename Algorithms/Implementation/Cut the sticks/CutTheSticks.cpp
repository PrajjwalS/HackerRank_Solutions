#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];

	sort(a,a+n);
	
	int i=-1;
	
	while((++i)<n)
	{	cout<<n-i<<endl;
		int smallest = a[i];
		for(int j=i;j<n;j++)
		{
			a[j]-=smallest;
			if(a[j]==0)
				i=j;
		}


	}
}