class MissingElement
{
	public static void main(String args[])
	{
		int a[]={1,2,3,4,6,7};
		int ExpectedNoElement=a.length+1;
		int total_sum=ExpectedNoElement*(ExpectedNoElement+1)/2;
		
		int sum=0;
		for(int i=0;i<a.length;i++)
		{
			sum=sum+a[i];
		}
		System.out.println("Missing number is="+(total_sum - sum));
	}
}
		