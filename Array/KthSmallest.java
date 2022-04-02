class KthSmallest
{
	public static void main(String args[])
	{
		int a[]={12,43,6,234,1,9};
		int k=3,i,j,temp;
		for(i=0;i<a.length;i++)
		{
			for(j=i+1;j<a.length;j++)
			{
				if(a[i]>a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
			if(i==k-1)
			{
				System.out.println("3rd Smallest Number:"+a[i]);
				break;
			}
		}
	}
}