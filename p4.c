
/*

purpose-To display sum of all odd values stored in array
pacakge-
File_name-p4.c
04/02/2021

*/

#include<stdio.h>
#define SIZE 30              //defining macro size
typedef int int32_t;         //Asssigning another name to data type using typedef.

void main()
{
	
	
	int32_t iarr[SIZE];
	int32_t i=0,sum_of_oddelements=0,n_elements=0;
	
	printf("Enter the value of n \n");
	scanf("%d",&n_elements);																//scanning value of n.
	
	printf("Enter array elements \n");											//scanning value of arr upto the value of n.

	for(i=0;i<n_elements;i++){
		
		scanf("%d",&iarr[i]);
	}

	for(i=0;i<n_elements;i++){
				
			if(iarr[i]%2!=0){
				
				sum_of_oddelements=sum_of_oddelements+iarr[i];
				
			}


	}

	printf("sum=%d \n",sum_of_oddelements);         //printing sum of odd elements stored in sum.

}
	
	

