


/*

purpose-Understanding of 2darray
pacakages-
File p2.4.3.c
04/02/2021

*/
#include<stdio.h>
#define ROW 3
#define COLOUM 3
typedef int int32_t;
void main()
{
	
		int32_t  iarr[ROW][COLOUM];
		int32_t i_var,j_var,n;
		
		n=sizeof(iarr)/sizeof(iarr[0][0]);
		
		printf("Enter the elements of 2d array \n");
		for(i_var=0;i_var<ROW;i_var++){
			
		
			for(j_var=0;j_var<COLOUM;j_var++){
		
						scanf("%d",&iarr[i_var][j_var]);
						
		
			}
		}
		printf("n=%d \n",n);
			
			
			
			
		
		for(i_var=0;i_var<ROW;i_var++){
			
			for(j_var=0;j_var<COLOUM;j_var++){
				
			 	printf("%d \n",iarr[i_var][j_var]);
			}
		}
		
}
