import java.util.HashSet;
import java.util.Set;
class SetInterface
{
	public static void main(String args[])
	{
		int a[]={3,12,4,7,4,7,2,7,7,3};
		Set<Integer> s=new HashSet<>();
		for(int n:a)
		{
			if(s.add(n)==false)
			{
				System.out.println(n);
			}
		}
	}
}