#include<iostream>
#include<conio.h>
using namespace std; 
int main()
{
	int a[100];
	int i,j,n,t=0;
	int flag=0;
	cout<<"Enter size of Array:";
	cin>>n;
	cout<<"Enter array element:\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"The array is:";
	for(i=0;i<n;i++)
	{
		cout<<a[i];
		cout<<"\n";
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				flag=1;
			}
		}
		if(flag==0)
		{
			break;
		}
	}
	cout<<"After sorting array:";
	for(i=0;i<n;i++)
	{
		cout<<a[i];
		cout<<"\t";
	}
	return 0;
}
