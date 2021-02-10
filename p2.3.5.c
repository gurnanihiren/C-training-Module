


/*

Purpose-Structure variable with type def.

package-

Files p2.3.5.c

*/
#include<stdio.h>
typedef int int32_t;
typedef char char8_t;
typedef float float32_t;

//structure variable without typedef.
 struct student
{
	char8_t name[SIZE];
	int32_t roll_no;
	float32_t marks;
	
	
	
}
void main()
{
	
	struct studen stu1,stu2;
	



}
//structure variable  with typedef.

typedef struct
{
	char8_t name[SIZE];
	int32_t roll_no;
	float32_t marks;
}student_st;
void main()
{
	
	student_st s1;
	
	
}
