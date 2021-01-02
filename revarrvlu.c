#include<stdio.h>
int main()
{       int n;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	int arr[n];
	int i;

	printf("Enter the elements\n");

	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}
	

	printf("\n");

	//Reverse order
	for(i=n-1;i>=0;i--)
	printf("%d\t",arr[i]);

	return 0;
}

