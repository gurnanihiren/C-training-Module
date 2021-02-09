

/*

purpose-Set bits of odd elements in an array and clear bits of odd elements of an array.
pacakage-
File name-p6.c
04/02/2021

*/

#include<stdio.h>
#define SIZE 50            //defining Macro size 
typedef int int32_t;

void main()
{
	
	int32_t  iarr[SIZE];									//initializing variables and arrays.
	int32_t i_temp=0,n_elements=0;
	
	printf("Enter the value of n \n");
	scanf("%d",&n_elements);
	
	for(i_temp=0;i_temp<n_elements;i_temp++){									//setting set bits 1 to odd positions and setting clear bits 0 to even positions.
		
		if(i_temp%2!=0){
			
			iarr[i_temp]=1;
			
		}
		else{
			
			iarr[i_temp]=0;
		}
	}

	
	
	
	printf("Printing array \n");								//printing array
	
	for(i_temp=0;i_temp<n_elements;i_temp++){
		
			printf("iarr[%d]=%d \n",i_temp,iarr[i_temp]);
	
	}
	
}
