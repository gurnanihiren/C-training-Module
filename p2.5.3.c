

/*	Purpose-defined Operator,undefined Operator.
	Package
	File-p2.5.3.c

*/

#include<stdio.h>

#ifndef _STDIO_H

//#error  "_STDIO_H Stdio.h  is Not included"

#define _STDIO_H

#endif


#define SUM 
#define SUB 
#define MUL 
#define DIV 
void main()
{

	int a,b,c;
	printf("Enter a and b \n");
	scanf("%d %d",&a,&b);

	#undef SUB
	//#if defined(SUM)
	#ifdef SUM
	
		
		c=a+b;
		printf("c=%d \n",c);
	#endif	
	//#if defined(SUB)
	#ifdef SUB
	
		c=a-b;
		printf("c=%d \n",c);
	#endif
	
	//#if defined(MUL)
	#ifdef MUL
	
		c=a*b;
		printf("c=%d \n",c);
	#endif	
	//#if defined(DIV)
	#ifdef DIV
		
		c=a/b;
		printf("c=%d \n",c);
	#endif
	
}
	
	








