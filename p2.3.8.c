


/*

purpose-call by reference with structure.
packages-
Files-p2.3.8.c

*/

#include<stdio.h>
#include<string.h>
#define SIZE 100

typedef int int32_t;
typedef char char8_t;
typedef float float32_t;

typedef struct{												//Declaraing structures
	
		char8_t name[SIZE];
		int32_t Roll_no;
		float32_t Marks;
		
	
	
}student_stu;

void change(student_stu *p_var);				//Function prototype
/*

	Function declaration 
	Formal arguments-declaraing a pointer to a structure variable.


*/
void main(){


	student_stu s1;								
	printf("Enter name of student \n");
	scanf("%s",s1.name);
	
	printf("Enter Roll No of student \n");
	scanf("%d",&s1.Roll_no);
	
	printf("Enter float Marks \n");
	scanf("%f",&s1.Marks);
	
	change(&s1);						//Function calling and passing address of structure variable.
	
	printf("Name of student su1 is %s \n",s1.name);
	printf("Roll_no of student stu1 is %d \n",s1.Roll_no);
	printf("Marks of student stu1 is %f \n",s1.Marks);
	
	
	
}

void change(student_stu *p_var){			//Function defination.
	 	
		strcpy(p_var->name,"Himanshu");
		p_var->Roll_no++;
		p_var->Marks++;
		
}
	










