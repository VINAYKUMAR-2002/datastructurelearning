class MergTwoArray
{
	public static void main(String args[])
	{
		int a[]={12,21,23,32,34};
		int b[]={11,22,33,44,55};
		int a1=a.length;
		int b1=b.length;
		int c1=a.length+b.length;
		int c[]=new int[c1];
		for(int i=0;i<a.length;i++)
		{
			c[i]=a[i];
		}
		for(int i=0;i<b.length;i++)
		{
			c[a.length+i]=b[i];
		}
		for(int i=0;i<c.length;i++)
		{
			System.out.println(c[i]);
		}
	}
}