#include<iostream>
using namespace std;
int main()
{
	int i,j,n,a[100],count=0;
	cin>>n;
	int output[n];
	output[0]=0;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=1;i<n;i++)
	{	
		count=0;
		for(j=0;j<i;j++)
		{
			if(a[i]<a[j])
				count++;
			
		}
		output[i]=count;
	}
	for(i=0;i<n;i++)
	 cout<<output[i]<<" ";
}
