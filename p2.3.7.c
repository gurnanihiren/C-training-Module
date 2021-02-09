


/*


pUrpose-Structure and Functions using call by value 
packages-
Files-p2.3.7.c

*/

#include<stdio.h>
#include<string.h>

#define SIZE 500

typedef char char8_t;
typedef int int32_t;

typedef struct{														//Declaraing sructure	
	
		char8_t name[SIZE];									       
		int32_t Roll_no;
		float marks;
			
	
	

}student_info;

void Change(student_info stu);		//Declaring Function prototype.

/*Function description

void Change(student_info stu)-To change the values of structure variable stu.

Formal paramenter-using a structure variable for to change the details of original strucutre

*/


void main(){
	
		student_info stu1;
		printf("Enter name of the student \n");
		scanf("%s",stu1.name);
		
		printf("Enter Roll_no of student 1 \n");
		scanf("%d",&stu1.Roll_no);
		
		printf("Enter marks of student 1 \n");
		scanf("%f",&stu1.marks);
		
		Change(stu1);								//Calling Function.				
			
		printf("%s",stu1.name);
		printf("%d",stu1.Roll_no);
		printf("%f",stu1.marks);
	}

void Change(student_info stu){							//Function defination.
		
		
		strcpy(stu.name,"Himanshu");
		stu.Roll_no=15;
		stu.marks=50;
	}
		
	
