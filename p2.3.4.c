


/*

	purpose-Array of POinters
	packages-
	Files-p2.3.4.c
*/
#include<stdio.h>
#define SIZE 50

typedef char char8_t;
typedef int int32_t;
typedef float float32_t;


typedef struct{							//Declaring structure
	
	
		char8_t name[SIZE];
		int32_t roll_no;
		float32_t marks;
		
	}stu_st;
	
void main()
{
		
			stu_st stu1[3];					//array of structures variable.
			int32_t i;
			
			for(i=0;i<3;i++)
			{
				printf("Enter the name of student %d ",i+1);
				scanf("%s",stu1[i].name);
				printf("%s",stu1[i].name);
				
				printf("Enter roll no of student %d ",i+1);
				scanf("%d",&stu1[i].roll_no);
				printf("%d",stu1[i].roll_no);
				
				printf("Enter marks of student %d",i+1);
				scanf("%f",&stu1[i].marks);
				printf("%f",stu1[i].marks);
				
								
				
			}
			
		
}
