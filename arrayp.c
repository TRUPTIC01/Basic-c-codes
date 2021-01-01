#include<stdio.h>
void display (int a[],int n);
int main ()
{ 
	int i,n,a[10];
	printf("Enter n");
	scanf("%d",&n);
	printf("Enter array elements");
	for(i=0; i<n; i++)
	{ 
		scanf("%d",&a[i]);
	
	display(a,n-1);
	}	
	return 0;
}

void display (int a[], int n)
{ 
	if (n == -1)
        return;
	printf("%d",a[n]);
	display(a,n-1);
} 

