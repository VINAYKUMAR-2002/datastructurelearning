import java.util.List;
import java.util.ArrayList;
class OddEven
{
	public static void main(String args[])
	{
		int a[]={12,12,21,23,32,34,43};
		ArrayList<Integer> al1=new ArrayList<>();
	    ArrayList<Integer> al2=new ArrayList<>();
		for(int i=0;i<a.length;i++)
		{
			if(a[i]%2==0)
			{
				al1.add(a[i]);
			}
			else
			{
				al2.add(a[i]);
			}
		}
		System.out.println("Even Number=");
		for(int n:al1)
		{
			System.out.println(n);
		}
		System.out.println("Odd Number=");
		for(int n1:al2)
		{
			System.out.println(n1);
		}
	}
}