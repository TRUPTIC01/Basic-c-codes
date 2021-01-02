#include<stdio.h>
#define MAX 50
int main()   
{   
    int a[MAX][MAX],b[MAX][MAX],product[MAX][MAX];
          int arows,acolumns,brows,bcolumns;  
	  int i,j,k;
          int sum=0;   
	  
	       printf("Enter the number of rows and columns for matrix A\n");    
           scanf("%d%d",&arows,&acolumns);
       printf("Enter the number of rows and columns for matrix B\n"); 
              scanf("%d%d",&brows,&bcolumns);
 
        //amatrix
	
        printf("Enter matrix A elements\n");
 
       for(i=0;i<arows;i++)  
       {
               for(j=0;j<acolumns;j++)
               {
 
		       scanf("%d",&a[i][j]);                                      }
        }
                                                                             //bmatrix

 
        printf("Enter B matrix elements\n");
         if(brows!=acolumns)
                printf("oops sorry,can't multiply");
         else
        {
               for (i=0;i<brows;i++)
	       { 
		       for(j=0;j<bcolumns;j++)
		       { 
			       scanf("%d",&b[i][j]);
		       }
	       } 
	} 

	 //product


       for(i=0;i<arows;i++)
       {              for(j=0;j<bcolumns;j++)
           {                      for(k=0;k<brows;k++)
                    {
                        sum += a[i][k]*b[k][j];
                       }
             product[i][j]=sum;
                sum = 0;
                }
          }

         //Resultant matrix
        printf("Resultant matrix\n");
          for(i=0;i<arows;i++)
         {
                for(j=0;j<bcolumns;j++)
                 {
		   printf("%d ",product[i][j]);
		 }
		printf("\n");
	 }

	  return 0;
}
