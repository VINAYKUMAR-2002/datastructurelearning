#include<stdio.h>
int main()
{
	int a[100],b[100],m,n,i,ind;
	printf("Enter the size of 1st Array:");
	scanf("%d",&m);
	printf("The %d array element:",m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	printf("Enter the size of 2nd Array:");
	scanf("%d",&n);
	printf("The %d array element:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("Enetr index which you want insert:");
	scanf("%d",&ind);
	for(i=m-1;i>=ind;i++)
   {
   	a[i+n]=a[i];
	}
	for(i=0;i<n;i++)
	{
		a[ind+i]=b[i];
	}
	printf("After Insertion:");
	for(i=0;i<m;i++)
	{
		printf("%d\t",a[i]);
	}
}
