#include<stdio.h>
int main()
{
	int i,j,k=1;
	for(i=1;i<=4;i++)
	{
	 for(j=1;j<=i;j++)
	 {
          printf("%d",k);
	  k++;
	 }
	 printf("\n");
	}
	while(i!=4)
	{
	 for(i=3;i>=1;i--)
	 {
          for(j=i;j>=1;j--)
	  {
	   printf("%d",k);
	   k++;
	  }
	  printf("\n");
	 }
	}
	return 0;
}
