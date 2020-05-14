#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,rem;
	scanf("%f%f",&a,&b);
	rem = fmod(a,b);
	printf("Rem=%f",rem);
	return 0;
}
