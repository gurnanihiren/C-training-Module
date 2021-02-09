


/*

	Purpose:-pointers with structures.
	package
	File-p2.3.1.c
	
*/

#include<stdio.h>
#define SIZE 50


typedef char char8_t;
typedef int int32_t;
typedef float float32_t;


typedef struct{											//Declaring structures,tpedefing structures with student_st.
	
	char8_t name[SIZE];
	int32_t roll_no;
	float32_t Marks;	 

}student_st;																		
void main()
{

		student_st stu1;
		printf("Enter name of student \n");
		scanf("%s",stu1.name);
		printf("Enter roll_no of student 1 \n");
		scanf("%d",&stu1.roll_no);
		printf("Enter Marks of student 1 \n");
		scanf("%f",&stu1.Marks);	
	
		student_st *p_var;
		p_var=&stu1;								//Assigning address of structure to pointer Variable and Accessing it through Pointer variable.
	
		printf("Name of student 1 is %s \n",p_var->name);		
		printf("Roll no of student 1 is %d \n",p_var->roll_no);
		printf("Marks of student 1 is %f \n",p_var->Marks);
}
	
	
	
	
	

