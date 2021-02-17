

/*

	Purpose-#if,#elif and #else
	packages-
	file-p2.5.2.c
	*/

#include<stdio.h>
#define FLAG 3
//if #define is not defined than #if will considered it as False and statements between #if and #end if will be skipped

void main()
{
		int a=20,b=30;
		#if FLAG==1			//#if contains only constant expressions of integral-typeskeyword,variable,cast,sizeof,enums are not Valid.
		
		
			printf("Value of Flag is Equal to 1 \n");
			a=a+10;
			b=b+10;
			printf("a=%d \n",a);
			printf("b=%d \n",b);
			
		#elseif FLAG==2
		
			printf("Value of Flag is Equal  to 2 \n");
			a=a-10;
			b=b-10;
			printf("a=%d \n",a);
			printf("b=%d \n",b);
		
			
		#elseif FLAG==3
			
			printf("Value of Flag is Equal to 3 \n");
			a=a*10;
			b=b*11;		
			printf("a=%d \n",a);
			printf("b=%d \n",b);
		
		
		#elseif FLAG==4
		
			printf("Value of Flag is Equal to 4 \n")
			a=a/10;
			b=b/10;
			printf("a=%d \n",a);
			printf("b=%d \n",b);
			
		#else
			
			printf("Values are does not match with if \n");
		
		#endif
		
		printf("a=%d b=%d",a,b);
		
		
		
}
