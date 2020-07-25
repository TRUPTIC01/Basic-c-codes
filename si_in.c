//calculation of Simple Interest
//25-07-2020
#include<stdio.h>
int main()
{
	float princpl,rate,time,s_i,amt;
	printf("Enter principal,rate and time\n");
	scanf("%f%f%f",&princpl,&rate,&time);
	s_i = (princpl*rate*time)/100;
	printf("Simple Interest = %.2f\n",s_i);
	amt = princpl + s_i;
	printf("Amount = %.2f\n", amt);
	return 0;
}
