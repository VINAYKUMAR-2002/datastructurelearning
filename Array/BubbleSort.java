class BubbleSort
{
	public static void main(String args[])
	{
		
		int a[]={34,21,35,12,6};
		int i,j;
		int temp=0;
		
		for(i=0;i<a.length;i++)
		{
			int flag=0;
			for(j=0;j<a.length-1-i;j++)
			{
				if(a[j]>a[j+1])
				{
				 temp=a[j];
				 a[j]=a[j+1];
				 a[j+1]=temp;
				 flag=1;
				}
			}
			if(flag==0)
			{
				break;
			}
		}
		System.out.println("After sort of Array:");
		for(i=0;i<a.length;i++)
		{
			System.out.print(a[i]+"\t");
		}
	}
}
			