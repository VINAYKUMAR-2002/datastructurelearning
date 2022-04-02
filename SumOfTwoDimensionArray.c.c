#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3];
	int b[3][3];
	int c[3][3];
	int i,j,m=0,n=9;
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		a[i][j]=m;
    		m++;
		 }
	 }
	 printf("Value of Array\n");
	 for(i=0;i<3;i++)
	 {
	 	for(j=0;j<3;j++)
	 	{
	 		printf("%d\t",a[i][j]);
		}
		printf("\n");
	 }
	 
	 for(i=0;i<3;i++)
	 {
	 	for(j=0;j<3;j++)
	 	{
	 		b[i][j]=n;
	 		n--;
		}
	 }
	 printf("The Second array\n");
	 for(i=0;i<3;i++)
	 {
	 	for(j=0;j<3;j++)
	 	{
	 	    printf("%d\t",b[i][j]);	
		}
		printf("\n");
	 }
	 
	 for(i=0;i<3;i++)
	 {
	 	for(j=0;j<3;j++)
	 	{
	 		c[i][j]=a[i][j]+b[i][j];
		}
	 }
	 printf("Sum Of array is:\n");
	 for(i=0;i<3;i++)
	 {
	 	for(j=0;j<3;j++)
	 	{
	 		printf("%d\t",c[i][j]);
		}
		printf("\n");
	 }
}
