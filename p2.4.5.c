

/*

Purpose-Pointer array with 2 dimensional array
packages-
Files-p2.4.5.c
04/02/2021

*/

#include<stdio.h>
#define ROW 3
#define COLOUM 3
typedef  int int32_t;
void main()
{
	
	int32_t iarr[ROW][COLOUM];
	int32_t (*p_Var)[COLOUM];				//declaring pointer to an array
	int32_t i,j;
	
	
//	p_Var=&iarr[0];
	printf("Enter 2d array elements \n");
	for(i=0;i<ROW;i++){
	
		for(j=0;j<COLOUM;j++){
			
				scanf("%d",&iarr[i][j]);
	
		}
	
	}
	p_Var=&iarr[0];		//Assigning value of iarr to pointer to an array.
	for(i=0;i<ROW;i++){
		for(j=0;j<COLOUM;j++){
		
							printf("%d",p_Var[i][j]);
		}
	}
}
	

 
