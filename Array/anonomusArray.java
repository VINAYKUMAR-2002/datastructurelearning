// array in java without any name is called AnonomousArray.It is an Array 
//just for creating and using instantlly......

class anonomusArray
{
  public static void main(String args[])
  {
    anonomusArray.sum(new int[]{23,45,55});
  }
  static void sum(int[]no)
  {
     int total=0;
    for(int i:no)
	{
	 total=total+i;
	}
	System.out.println("Sum is="+total);
  }
}