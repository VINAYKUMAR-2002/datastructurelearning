#include<iostream>
using namespace std;
int main()
{
	int a[234];
	int i,j;
	int t=0,n;
	cout<<"Enter size of Array:";
	cin>>n;
	cout<<"Enter array element :";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Array without sorting :";
	for(i=0;i<n;i++)
	{
		cout<<a[i];
		cout<<"\n";
	}
	int min;
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
			{
			    min=j;
			}
		}
			t=a[i];
			a[i]=a[min];
			a[min]=t;
	}
	cout<<"After sorted Array";
	for(i=0;i<n;i++)
	{
		cout<<a[i];
		cout<<"\n";
	}
}
