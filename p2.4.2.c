


/*

Purpose-To know about pointers
packages-
File name-p2.4.2.c
04/02/2021
*/


#include<stdio.h>

typedef int int32_t;
typedef char char8_t;
typedef float float32_t;
typedef double  double64_t;


void main()
{
	
		int32_t *p_ivar,x_temp=10;
		char8_t *p_cvar,c_temp='A';
		float32_t *p_fvar,f_temp=2.0;
		double64_t *p_dvar,d_temp=4.00;
		
		p_ivar=&x_temp;
		p_cvar=&c_temp;
		p_fvar=&f_temp;
		p_dvar=&d_temp;
		
		
		printf("%d \n",*p_ivar);
		printf("%c \n",*p_cvar);
		printf("%f \n",*p_fvar);
		printf("%lf \n",*p_dvar);
		
		printf("%p \n",p_ivar);
		printf("%p \n",p_cvar);
		printf("%p \n",p_fvar);
		printf("%p \n",p_dvar);
		
		p_ivar++;
		p_cvar++;
		p_fvar++;
		p_dvar++;
		
		printf("%p \n",p_ivar);
		printf("%p \n",p_cvar);
		printf("%p \n",p_fvar);
		printf("%p \n",p_dvar);
		
	}
		
		


			



	

