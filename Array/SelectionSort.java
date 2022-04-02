class SelectionSort
{
	public static void main(String args[])
	{
		int a[]={23,42,12,45,3};
		int i,j,min;
		int temp=0;
		for(i=0;i<a.length;i++)
		{
			min=i;
			for(j=i+1;j<a.length;j++)
			{
				if(a[j]<a[min])
				{
					min=j;
				}
			}
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
		for(i=0;i<a.length;i++)
		{
		    System.out.println(a[i]);
		}
	}
}
		