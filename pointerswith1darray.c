
/*

purpose:-Pointer and 1d arrray/2d array
packages:-
file name-
04/02/2021

*/


#include<stdio.h>
#define SIZE 30                      //defining Macro with size 50
typedef int int32_t;				//changing name of int type using typedef

void main()
{
	
	
		int32_t iarr[SIZE];				//Declaraing variables and pointer variables.
		int32_t inelements=0,itemp;	    
		int32_t *p_var;
		
		printf("Enter the value of n \n");
		scanf("%d",&inelements);
		
		for(itemp=0;itemp<inelements;itemp++){
			
			scanf("%d",&iarr[itemp]);
			
		}
		
		p_var=&iarr[0];   //p_var=arr;//Name of the array is a constant pointer and will return address of first element.		
		
		for(itemp=0;itemp<inelements;itemp++){
			
			printf("%d \n",*(p_var+itemp));
			
		}
}
