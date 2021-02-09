

/*

	
	purpose-sort array in ascending order 
	pacaksge-
	File-p2.c
	04/02/2021
	
	*/


#include<stdio.h>
#define SIZE 50        //declaring size of a macro
typedef int int32_t;   //changing name of data type		

void main()
{
	
	
	int32_t iarr[SIZE];						//initializing variables and array
	int32_t i_temp=0,n_elements=0;
	int32_t j_temp=0,temp_variable=0;
	
	printf("Enter the value of n \n");
	scanf("%d",&n_elements);							//scanning values of n from user
	
			for(i_temp=0;i_temp<n_elements;i_temp++){					//scanning array name from user
		
					scanf("%d",&iarr[i_temp]);
			}
	
	
	printf("Before sorting \n");						
			for(i_temp=0;i_temp<n_elements-1;i_temp++){														//sorting in Ascending(smalest to largest).
			
			for(j_temp=i_temp+1;j_temp<=n_elements-1;j_temp++){
						
						
						if(iarr[i_temp]>iarr[j_temp]){
					
								temp_variable=iarr[i_temp];
								iarr[i_temp]=iarr[j_temp];
								iarr[j_temp]=temp_variable;
					
						}
			
			}
	}
	
	printf("After sorting \n");
	
	for(i_temp=0;i_temp<n_elements;i_temp++){

		printf("iarr[%d]=%d \n",i_temp,iarr[i_temp]);

	}

}




	
	
	

