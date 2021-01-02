#include<stdio.h>
int main() 
{ 
	int a[5][5] = {{21,43,56,4,5},{45,4,6,7,8},{45,34,6,7,8},{2,3,4,5,6},{56,5,4,3,2}};
	int i,j;
	int sum = 0;

	//Row sum
	for(i=0;i<5;i++)
	{ 
		for(j=0;j<5;j++)
		{ 
		  sum += a[i][j];
		}
		 printf("%d\n",sum);
		 sum=0;
	} 

	//Column Sum
	
	for(j=0;j<5;j++)
	{ 
		for(i=0;i<5;i++)
		{ 
			sum += a[i][j];
		} 
		printf("%d\n",sum);
		sum = 0;
	}

	return 0;
}
