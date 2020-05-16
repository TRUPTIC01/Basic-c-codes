#include<stdio.h>
  #include<stdlib.h>
   int main()
    {
      int i,j,k=1;
     for(i=1;i<=4;i++)
      {
      for(j=1;j<=i;j++)
        {
       printf("%d",k);
       k++;
     }
     printf("\n");
  }
   if(i<=4)
  {
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=i;j++)
       {
        printf("%d",k);
     k++;
      }
         printf("\n");
    }
    exit (0);
   }
  else
  {
      for(i=3;i>=1;i--)
     {
          for(j=i;j>=1;j--)
          {
            printf("%d",k);
             k++;
         }
            printf("\n");
    }
   }
  return 0;
 }

