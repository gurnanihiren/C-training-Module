


/*

Purpose-POINTERS WITHIN STRUCTURES
pacakges
Files-p2.3.2.c

*/

#include<stdio.h>
#define SIZE 50

typedef int int32_t;
typedef char char8_t;

typedef struct{							//declaring structure.
	
	char8_t name[SIZE];
	int32_t *p;
	
	}student_st;						//typedefng structure with studnt_st.
void main()
{

	student_st stu1;
	student_st *pvar;
	int32_t x=10;
	printf("Enter name of student s1 \n");
	scanf("%s",stu1.name);
	stu1.p=&x;
	printf("%d",*(stu1.p));
	pvar=&stu1;
	printf("%s \n",pvar->name);
	printf("%d \n",*(pvar->p));	

}


//Accessing structures members with structure variable use . operator;
//Accessing structures Members with pointer variables use -> notation.
//Accessing  pointer variable as a (strucutre Member) using a pointer variable having address of structures use   *(->)
