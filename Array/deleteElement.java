class deleteElement
{
	public static void main(String args[])
	{
		int a[]={12,34,56,65,21};
		int element=34;
		for(int i=0;i<a.length;i++)
		{
			if(element==a[i])
			{
				for(int j=0;j<a.length-1;j++)
				{
					a[j]=a[j+1];
				}
				break;
			}
		}
		for(int i=0;i<a.length-1;i++)
		{
			System.out.println(a[i]);
		}
	}
}