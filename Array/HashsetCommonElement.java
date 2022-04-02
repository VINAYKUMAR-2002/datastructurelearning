
import java.util.HashSet;
class HashsetCommonElement
{
	public static void main(String args[])
	{
		int a[]={4,3,7,9,2,4,3};
		int b[]={5,1,4,8,3};
		int i,j;
		HashSet<Integer> hs=new HashSet<>();
		for(i=0;i<a.length;i++)
		{
			for(j=0;j<b.length;j++)
		    {
				if(a[i]==b[j])
				{
					hs.add(a[i]);
				}
			}
		}
		for(int n:hs)
		{
			System.out.println(n+"");
		}
	}
}
			