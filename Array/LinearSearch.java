class LinearSearch
{
	public static void main(String args[])
	{
		
		int a[]={21,34,32,45,6};
		int item=34,temp=0;
		for(int i=0;i<a.length;i++)
		{
			if(a[i]==item)
			{
				System.out.println("Element is present at="+i+ "index position");
				temp=temp+1;
			}
		}
		if(temp==0)
		{
			System.out.println("Not Present");
		}
	}
}