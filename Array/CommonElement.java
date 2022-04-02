class CommonElement
{
	public static void main(String args[])
	{
		int a[]={1,4,3,2,6,5};
		int b[]={7,0,11,4,12,5};
		for(int i=0;i<a.length;i++)
		{
			for(int j=0;j<b.length;j++)
		    {
				if(a[i]==b[j])
				{
					System.out.println(a[i]);
				}
			}
		}
	}
}
			