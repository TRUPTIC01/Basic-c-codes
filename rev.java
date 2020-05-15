/*Reverse number*/
class rev
{
	public static void main(String [] args)
	{
		int a = 1234, rev,digit;
		rev = 0;

		while(rev!=0)
		{
			digit = a%10;
			rev=rev*10+digit;
			a = a/10;
		}
		

	        System.out.ln("The reverse number is:"+rev);
	}
}

