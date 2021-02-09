


/* 

Purpose-sort in descending order
packages-
File name p3.c
04/02/2021
*/

#include<stdio.h>
#define SIZE 50                      //defining macro size.
typedef  int int32_t;				//defining names to data types.
void main()
{
	
		int32_t iarr[SIZE];							//declaring array elements and variables.
		int32_t in_elements=0;
		int32_t itemp_t=0;
		int32_t itemp_i=0,itemp_j=0;
		
		printf("Enter the size of n_elements\n");
		scanf("%d",&in_elements);
		
		for(itemp_i=0;itemp_i<in_elements;itemp_i++){
			
			
			scanf("%d",&iarr[itemp_i]);
			
		}
		for(itemp_i=0;itemp_i<in_elements-1;itemp_i++){				//sorting in descending order
			
			for(itemp_j=itemp_i+1;itemp_j<=in_elements-1;itemp_j++){
				
					if(iarr[itemp_i]<iarr[itemp_j]){
						
						
							itemp_t=iarr[itemp_i];
							iarr[itemp_i]=iarr[itemp_j];
							iarr[itemp_j]=itemp_t;
							
					}
			}
		}
		
		printf("After sorting in descending order \n");
		
		for(itemp_i=0;itemp_i<in_elements;itemp_i++){
			
			printf("%d \n",iarr[itemp_i]);
		}
}
					

