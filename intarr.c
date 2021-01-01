#include<stdio.h>
int main()
{ 
	int arr[10],i;
	
	for(i=0;i<10;i++)
	{ 
		printf("Enter the element for index %d\n",i);
		scanf("%d",&arr[i]);
	} 

	printf("Enter all the elements\n");


	for(i=0;i<10;i++)
	 
		printf("%d\n",arr[i]);


	return 0;
}


