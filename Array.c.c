


#include<stdio.h>
#include<stdlib.h>
#define SIZE 100


typedef int int32_t;
typedef char char8_t;

void main()
{
	
	int iarr[SIZE];
	char8_t choice;

//while(1)	
	printf("Enter a choice from below Given Menu \n");
	
	printf("1.Accept the Value from user \n");
	printf("2.Sort array in Ascending order \n");
	printf("3.Sort array in descending Order \n");
	printf("4.Display sum of odd Values stored in array \n");
	printf("5.Display numberof even values stored in an array");
	printf("6.Set bits of odd position elementsand clear bits of even position elements");
	printf("7.Exit \n");

while(1)

{	
		
		printf("Enter the value of choice \n");
		scanf(" %c",&choice);
		
		switch(choice)
			{
		
					case '1' :
					{
			
			
						int32_t i_temp=0,n_elements=0;
	
						printf("Enter the number of elements you want to enter \n");      										 //enter the value of n from user.
						scanf("%d",&n_elements);	//scanning value of n.
			
					/*	if(n_elements==0)
		
						{
				
								printf("n has value 0 for Entering.");
								return;
				
						}
					*/
						printf("Enter the element of an arrays \n");  															 //Enter array elements
	
						for(i_temp=0;i_temp<n_elements;i_temp++){  																						 //scanning	  array elements from user.
		
						scanf("%d",&iarr[i_temp]);
						
						}			
			
						for(i_temp=0;i_temp<n_elements;i_temp++){       																				//printing array elements.
		
							printf("arr[%d]=%d \n",i_temp,iarr[i_temp]);
		
						}
						break;	
					}
		
		
					case '2' :
			
			
			{
			
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
					
					break;
	
			}		
	
			case '3'	:
				
						{
			
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
				
						break;			
		
						}
	
	case '4' :
				{
			
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
					
					break;
				}
	
	case '5'	:
				{		
	
					int32_t i=0,n_elements=0;
					printf("Enter the value of n :\n");
					scanf("%d",&n_elements);									//scanning value of n.
	
					for(i=0;i<n_elements;i++){								//scanning value of array elements.
	
		
					scanf("%d",&iarr[i]);
	
	
					}
			
					for(i=0;i<n_elements;i+=2){								//printing value of elements of iarr at even positions only.
		
		
					printf("iarr[%d]=%d \n",i,iarr[i]);
	
					}
	
		
					break;
				}
	case '6'	:
		{
				
					int32_t i_temp=0,n_elements=0;
	
					printf("Enter the value of n \n");
					scanf("%d",&n_elements);
	
					for(i_temp=0;i_temp<n_elements;i_temp++){									//setting set bits 1 to odd positions and setting clear bits 0 to even positions.
			
							if((i_temp%2)!=0){
			
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
					break;
					
			}
		
		case '7' :
		{
			
					printf("Exit from program");
					exit(1);
		}	
		default:
		{
			
					printf("Invalid Choice \n");
							
		}

		}
	}


}
		
		
	
		
	
	
			
			
			
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	



				
			
			
			
	
	
	
	
	
	
	

