import java.util.*;
class Maximum
{
  public static void main(String args[])
  {
    Scanner sc= new Scanner(System.in);
	int i,n,max=0;
	int a[]=new int[100];
	System.out.println("Enter Size of Array:");
	n=sc.nextInt();
	System.out.println("Enter Element of Array:");
	for(i=0;i<n;i++)
	{
	  a[i]=sc.nextInt();
	}
    System.out.println("The Array:");
	for(i=0;i<n;i++)
	{
	   System.out.println(a[i]+"\t");
    }
	for(i=0;i<n;i++)
	{
	  if(a[i]>max)
	  {
	    max=a[i];
	  }
	}
	System.out.println("Max="+max);
  }
}
	
	