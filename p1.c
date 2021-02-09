/*
04/02/2021
Purpose:-To get an integer from user 
pacakage:-
file name:-p1.c

*/



#include<stdio.h>
#define SIZE 30      //defining macro size.
typedef int int32_t;
void main()
{
	
	
	int32_t iarr[SIZE];
	int32_t i_temp=0,n_elements=0;

	printf("Enter the number of elements you want to enter \n");      										 //enter the value of n from user.
	scanf("%d",&n_elements);		//scanning value of n.

	printf("Enter the element of an arrays \n");  															 //Enter array elements
	
	for(i_temp=0;i_temp<n_elements;i_temp++){  																						 //scanning  array elements from user.
		
		scanf("%d",&iarr[i_temp]);
	}

	for(i_temp=0;i_temp<n_elements;i_temp++){       																				//printing array elements.
		
		printf("arr[%d]=%d \n",i_temp,iarr[i_temp]);
		
		}
		

}

