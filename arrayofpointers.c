

/*


	purpose-array of pointers
	packages-
	Files-p2.4.6.c
	04/02/2021
	
*/
#include<stdio.h>
#define ROW 3
#define COLOUM 3
typedef int int32_t;
void main()
{
	
		int32_t iarr[ROW][COLOUM];
		int32_t *p_var[3];   //Declaraing array of Pointers.
		int32_t i,j;
		
		printf("Enter the 2d array \n");
		for(i=0;i<ROW;i++){
			
			for(j=0;j<COLOUM;j++){
				
					scanf("%d",&iarr[i][j]);
				
			}
		}
		for(i=0;i<3;i++){
			
			p_var[i]=iarr[i];				//Assigning each pointer a base address of each 1-d array of a 2d array.
			
		}
		for(i=0;i<ROW;i++){
			
			for(j=0;j<COLOUM;j++){
				
				printf("%d \n",p_var[i][j]);		//printing each 2-d array elements using  array of Pointers.
				
			}
		}
	
}
