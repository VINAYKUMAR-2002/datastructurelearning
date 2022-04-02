class BRUTFORCE
{
	public static void main(String args[])
	{
		int a[]={3,5,4,3,2,2,1};
		int i,j;
		System.out.print("Duplicate values are=");
		for(i=0;i<a.length;i++)
		{
			for(j=i+1;j<a.length;j++)
			{
				if((a[i]==a[j]) &&(i!=j))
				{
					System.out.print(a[j]+"\t");
				}
			}
		}
	}
}