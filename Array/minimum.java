class minimum
{
   public static void main(String args[])
   {
     int i;
	 int[]a={43,56,2,4,1};
	 int min=a[0];
	 String s="vkdipu2002";
	 System.out.println("vkdipu2002="+s.length());
	 for(i=1;i<a.length;i++)
	 {
	    if(a[i]<min)
		{
		  min=a[i];
		}
     }
	 System.out.println("Min="+min);
   }
}