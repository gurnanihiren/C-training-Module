


/*

Purpose-Add the functionality to create the dynamic Memory Allocation for structure array.
Packages
Files-p2.4.6.c

*/


#include<stdio.h>
#include<stdlib.h>

typedef int int32_t;
typedef float float32_t;
typedef char char8_t;

struct student			//Structure declaration.
{
				
		char8_t name[30];
		int32_t roll_no;
		float32_t marks;



};
void main()

{						//Assigning  Dynamic Memory Allocation Memory for structure array.
	
	
	struct student *p_stu[3];
	int32_t i;
	
	
	for(i=0;i<3;i++){
		
		p_stu[i]=(struct student *)malloc(sizeof(struct student ));
				if(p_stu[i]==NULL){
			
					printf("Memory Not allocated \n");
			
				}		
	}		
	
	for(i=0;i<3;i++){
	
		printf("Enter name of student \n");
		scanf("%s",p_stu[i]->name);
		printf("%d",p_stu[i]->name);
		
		
		printf("Enter roll no of student \n");
		scanf("%d",p_stu[i]->roll_no);
		printf("%d",p_stu[i]->roll_no);
		
		printf("Enter marks of student \n");
		scanf("%f",p_stu[i]->marks);
		printf("%f",p_stu[i]->marks);
		
	}
	
	for(i=0;i<3;i++){
		
		free(p_stu[i]);
		
	}
		
		
}






