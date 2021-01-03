#include<stdio.h>
int main()
{ 
	char s[200];
	int l,i,ch;
	printf("Enter String\n");
	gets(s);
	for(l=0;s[l];l++);
	for(i=0;i<l/2;i++) 
	{ 
		ch=s[i];
		s[i]=s[l-1-i];
		s[l-1-i]=ch;
	} 

	 printf("Reverse string\n\n %s",s);
	 return 0;
}


