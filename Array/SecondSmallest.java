class SecondSmallest
{
	public static void main(String args[])
	{
		int a[]={12,43,67,53,89};
		int temp;
		for(int i=0;i<a.length;i++)
		{
			for(int j=i+1;j<a.length;j++)
			{
				if(a[i]>a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
			if(i==1)
			{
				break;
			}
		}
		System.out.println(a[1]);
	}
}