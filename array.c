
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define SIZE 100


typedef int int32_t;
typedef char char8_t;

int main(){
	
	int32_t iarr[SIZE];
	char8_t ca[SIZE];
	char8_t choice=0;
	int32_t i=0,n=0,j=0,temp=0,sum=0,odd_bit=0,clear_bit=0,flag=0,ans=0;
	char8_t ch;
	int32_t flag1=0;
	
	printf("Enter the value of n for array Elements \n");
	scanf("%d",&n);
	
	if(n==0 || n<0){
		
		printf("First Enter the Value of n greater than zero \n");
		exit(0);
		
	}	
while(1){

	
	printf("1.Accept the Value from user \n");
	printf("\n");
	printf("2.Sort array in Ascending order \n");
	printf("\n");
	printf("3.Sort array in descending Order \n");
	printf("\n");
	printf("4.Display sum of odd Values stored in array \n");
	printf("\n");
	printf("5.Display numberof even values stored in an array \n");
	printf("\n");
	printf("6.Set bits of odd position elementsand clear bits of even position elements \n");
	printf("\n");
	printf("7.Exit \n");
	printf("\n");
	printf("\n");
	
		printf("Enter the value of choice \n");
		scanf("%s",ca);
		i=0;
		while(ca[i++]!='\0')
		{
			if(ca[i++]=='.')
			{
				
				flag=1;
			}
			
		
		}
		i=0;
		for(i=0;ca[i]!='\0';i++)
		{
			if((ca[i]>='a' && ca[i]<='z')  || (ca[i]>='A'  && ca[i]<='Z'))
			{
				
						flag1=1;
						
			}
			
		}
		if(flag==1 || flag1==1)
		{
			
			printf("Invalid Input Floating point Values or character point Values! \n");
			exit(0);
		}
		else
		{
			ans=atoi(ca);
		} 
		printf("ans=%d",ans);
		

	
				
		switch(ans){
			
							
							
					case 1 :
					
									
							printf("Enter array Elements \n");
							for(i=0;i<n;i++){
							
									scanf("%d",&iarr[i]);
							
							}
			
							for(i=0;i<n;i++){       																				//printing array elements.
		
								printf("arr[%d]=%d \n",i,iarr[i]);
		
							}
							printf("\n");
							printf("\n");	
					
							break;	
					
					case 2 :
						
							printf("Sorting begins \n");
										
			
							for(i=0;i<=n-1;i++){														//sorting in Ascending(smalest to largest).
			
								for(j=i+1;j<n;j++){
						
						
									if(iarr[i]>iarr[j]){
					
									temp=iarr[i];
									iarr[i]=iarr[j];
									iarr[j]=temp;
					
									}
								}	
							}
	
							printf("After sorting \n");
			
							for(i=0;i<n;i++){

							printf("%d \n",iarr[i]);
	
							}
							printf("\n");
							printf("\n");
					
							break;
	
							
	
			case 3 :
					
							printf("sorting begins \n");
							for(i=0;i<=n-1;i++){				//sortng in descendng order
				
								for(j=i+1;j<n;j++){
				
										if(iarr[i]<iarr[j]){       
						
											temp=iarr[i];
											iarr[i]=iarr[j];
											iarr[j]=temp;
							
										}
								}	
							}
							
							printf("After sortng in descendng order \n");
		
							for(i=0;i<n;i++){
			
									printf("%d \n",iarr[i]);
		
							}
						
							printf("\n");
							printf("\n");
							break;
		
						
	
	case 4 :
								for(i=0;i<n;i++){
					
									if((iarr[i]%2)!=0)
									{
										
												sum=sum+iarr[i];
											
											}		
								}		

								printf("sum=%d \n",sum);         //prntng sum of odd elements stored n sum.
								printf("\n");
								printf("\n");
								break;

	
	case 5:
					for(i=0;i<n;i++){
						
						if(iarr[i]%2==0)
						
							printf("%d \n",iarr[i]);
				
					
					}
					break;
	case 6:
							printf("Enter bit position You want to clear for even element\n");
							scanf("%d",&clear_bit);
							
							if(clear_bit<0 || clear_bit>31){
					
							printf("Invalid bit Position \n");
								break;
							}
								
							printf("Enter bit position you want to set for odd element \n");
							scanf("%d",&odd_bit);
							
							if(odd_bit<0 || odd_bit>31){
							
							printf("Invalid bit position \n");
							break;
							}
							
							for(i=0;i<n;i++){
								
								if(iarr[i]%2==0)
									iarr[i]=iarr[i]|((1<<clear_bit));
								else
									iarr[i]=iarr[i]&(~(1<<odd_bit));
							}
							printf("After setting bit Positions of Array Elements becomes \n");
							for(i=0;i<n;i++){
								
								printf("iarr[%d]=%d \n",i,iarr[i]);
							}
									
									
			
					break;
		case 7 :
		
			
					printf("Exit from program \n");
					return;
		
		default:
					printf("Invalid Case \n");
					printf("\n");
					break;
							

			}
		}
	}
