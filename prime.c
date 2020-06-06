#include<stdio.h>
int isprime(int p);
int main()
{
	int n,result;
	printf("Enter any number");
	scanf("%d",&n);
	result=isprime (n);
	if(result==1)
	 printf("The number is prime");
	else
         printf("The number is not prime");
	return 0;
}
int isprime(int p)
{
	int  c;
	for(c=2;c<p;c++)
	{
	  if(p%c==0)
		  return 0;
	}
	return 1;
}
