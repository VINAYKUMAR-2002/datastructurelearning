class KthLargest
{
	public static void main(String args[])
	{
		int a[]={5,8,12,7,6,2,4};
		int k=4;
		int temp,i,j;
		for( i=0;i<a.length;i++)
		{
			for( j=i+1;j<a.length;j++)
			{
				if(a[i]<a[j])
				{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				}
			}
			if(i==k-1)
		    {
			   System.out.println(a[i]);
               break;
		    }
		}
	}
}