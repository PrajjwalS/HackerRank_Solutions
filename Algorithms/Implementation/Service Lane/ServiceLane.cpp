#include<iostream>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    while(t--)
    {
        int i,j;
        cin>>i>>j;
        int smallest=10000;
        for(i;i<=j;i++)
        {
            if(a[i]<smallest)
                smallest=a[i];
        }
        cout<<smallest<<endl;
    }

return 0;    
}