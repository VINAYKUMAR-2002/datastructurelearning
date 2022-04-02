class BinarySearch
{
	public static void main(String args[])
	{
		int a[]={12,21,23,32,34,443,45,43};
		int item=443;
		int lowerIndex=0;
		int higherIndex=a.length-1;
		int MiddleIndex=(lowerIndex+higherIndex)/2;
		while(lowerIndex<=higherIndex)
		{
			if(a[MiddleIndex]==item)
			{
				System.out.println("Element Present at:"+MiddleIndex+"index position");
				break;
			}
			else if(a[MiddleIndex]<item)
			{
				lowerIndex=MiddleIndex+1;
			}
			else{
				higherIndex=MiddleIndex-1;
			}
			MiddleIndex=(higherIndex+lowerIndex)/2;
		}
		if(lowerIndex>higherIndex)
		{
			System.out.println("Not Found");
		}
	}
}