#include<stdio.h>
int main()
{ 
	int arr[5]= {0,1,2,4,5};
	int i;

	//original order
	for(i=0;i<5;i++)
	printf("%d\t",arr[i]);
	

	printf("\n");

	//Reverse order
	for(i=4;i>=0;i--)
	printf("%d\t",arr[i]);

	return 0;
}

