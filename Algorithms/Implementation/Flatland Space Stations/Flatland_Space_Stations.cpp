#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	vector<int>v;

	for(int i=0;i<m;i++)
	{	
		int k;
		cin>>k;
		v.push_back(k);
	}
	sort(v.begin(),v.end());


	int max=0;
	for(int i=0;i<n;i++)
	{
		int min=100009;
		for(int j=0;j<m;j++)
		{
			if(abs(i-v[j])<min)
			{
				min=abs(i-v[j]);
			}
			else
				break;
		}
		if(max<min)
			max=min;

	}
	cout<<max<<endl;
}