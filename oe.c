 #include<stdio.h>
     int main()
{
   int a,e,o,n;
   a=1;
   e=0;
   o=0;
   scanf("%d",&n);
  while(a<=n)
   {
       if(a%2==0)
    {
       e++;
     }
     else
     {
        o++;
      }
     a++;
  }
  printf("The even count is %d  and odd count is %d",e,o);
return 0;
}
