

/*

Purpose-strucutrs padding && structure Allignment
package-
Files-p2.3.3.c


*/
#include<stdio.h>
#define SIZE 50

typedef char char8_t;
typedef int int32_t;

#pragma pack(1)

typedef struct{
	
	
		char8_t a;
		int32_t b;
		char8_t c;
	}example_st;
	

void main()
{

		example_st stu1;
		printf("size of structure Variable stu1  is %d \n",sizeof(stu1));
		
}
