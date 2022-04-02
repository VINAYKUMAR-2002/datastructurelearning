class InsertionSort
{
	public static void main(String args[])
	{
		int a[]={23,13,56,3,87,12};
		int j,temp,i;
		for(i=1;i<a.length;i++)
		{
			temp=a[i];
			j=i;
			while(j>0 && a[j-1]>temp)
			{
				a[j]=a[j-1];
				j=j-1;
			}
			a[j]=temp;
		}
		for(i=0;i<a.length;i++)
		{
			System.out.println(a[i]);
		}
	}
}
