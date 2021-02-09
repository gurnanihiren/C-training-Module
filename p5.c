

/* 

purpose-To display value stored in the even locations of an array.
pacakage-
File name-p5.c
04/02/2021

*/


#include<stdio.h>
#define SIZE 50				//defining size of macro SIZE as 50
typedef int int32_t;
void main()
{
	
	int32_t iarr[SIZE]; 
	int32_t i=0,n_elements=0;
	printf("Enter the value of n :\n");
	scanf("%d",&n_elements);									//scanning value of n.
	
	for(i=0;i<n_elements;i++){								//scanning value of array elements.
	
		
		scanf("%d",&iarr[i]);
	}
	
	for(i=0;i<n_elements;i+=2){								//printing value of elements of iarr at even positions only.
		
		
		printf("iarr[%d]=%d \n",i,iarr[i]);
	
	}
	
	
}
