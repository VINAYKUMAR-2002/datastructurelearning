class InsertElement
{
	public static void main(String args[])
	{
		int a[]={12,10,23,43,21};
		int pos=4;
		int item=9;
		for(int i=a.length-1;i>pos-1;i--)
		{
			a[i]=a[i-1];
		}
		a[pos-1]=item;
		for(int i=0;i<a.length;i++)
		{
			System.out.println(a[i]);
		}
	}
}