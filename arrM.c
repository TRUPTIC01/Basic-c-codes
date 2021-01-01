#include<stdio.h>
#define N 15
int main()
{ 
	int arr[N], i;

	for(i=0;i<N;i++) {
		printf("Enter element for index %d\n",i);
		scanf("%d",&arr[i]);
	} 

	printf("Enter all the elements\n");

	for(i=0;i<N;i++)
	
		printf("%d\n",arr[i]);

	return 0;
}

