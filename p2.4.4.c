


/*

purpose-Double Pointer
pacakges-Nill
program-2.4.4
04/02/2021
*/
#include<stdio.h>
typedef  int int32_t;
 
void main()
{
	
		int32_t **pp_var;				//Declaring Pointer to a pointeri.e double pointer,pointer variable and a Normal Int variable
		int32_t *p_var;						
		int32_t i_var;
		
		i_var=20;
		p_var=&i_var;
		pp_var=&p_var;
		
		printf("value of i_var=%d \n",i_var);
		printf("value of i_var using p_var is %d \n",*p_var);
		printf("value of i_var using pp_var is %d \n",**pp_var);
		printf("-----------");
		printf("address of i_var=%p \n",&i_var);
		printf("addres of i_var=%p \n",p_var);
		printf("address of i_var=%p \n",*pp_var);
		printf("---------");
		printf("Value of p_var is %p \n",p_var);
		printf("value of p_var using **pp_var=%p \n",*pp_var);
		printf("---------");
		printf("value of pp_var=%p \n",pp_var);
		printf("Address of pp_var=%p \n",&pp_var);		
	
}
		
		
			
	




