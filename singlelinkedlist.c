


#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct node
{

	int roll_no;
	int grade;
	char  name[100];
	struct node *link;
};



struct  node *create_list(struct node *start,int n_nodes);



struct node *addatbeg(struct node *start,int n1,int n2,char n3[]);



struct node *addatend(struct node *end,int n1,int n2,char n3[]);



void display(struct node *start);



void search(struct node *start,int item);



struct node * delete(struct node *start,int  );



void Modify_parameter(struct node *start,int old_data,int new_data);



struct node *sort_list(struct node*start,int n_nodes);


void main()
{


	int n=0;
	int old_data1=0;
	int new_data1=0;
	
	int delete_var=0;
	int n_nodes=0;
	
	struct node *start=NULL;
	printf("To perfrom any operation we need to First create List \n");
	printf("Calling List \n");
	
	char choice;
	
	
	while(1)
	
	{
		
//	printf("Enter no of nodes to create \n");

	printf("1,create_list \n");
	printf("2.calling void display \n");
	printf("3.search \n");
	printf("4.Modify _parameter \n");
	printf("delete  Node \n");
	printf("sort_list \n");


	printf("Enter a choice \n");
	scanf(" %c",&choice);
	
	switch(choice)
	{
	
	
	case '1':
		
		printf("Enter no of nodes to create \n");
		scanf("%d",&n_nodes);
		start=create_list(start,n_nodes);
		break;
	
	case '2' :

		printf("Calling void display \n");
		display(start);
		break;
	
	case '3':
	
		printf("Enter the Value of n for which you want to search \n");
		scanf("%d",&n);
		search(start,n);
		break;
	
	case '4':
	
		printf("Enter value of old data which you want to change \n");
		scanf("%d",&old_data1);
		printf("Enter the Value of modify_variable \n");
		scanf("%d",&new_data1);
		Modify_parameter(start,old_data1,new_data1);
		printf("After modifying parameter  lsit is\n");
		display(start);
		break;
	
	
	case '5':

		printf("Enter the Value of delete_variable \n");
		scanf("%d",&delete_var);
		start=delete(start,delete_var);
		printf("After deleting a Node from List becomes\n");
		display(start);
		break;
	
	
	case '6' :
	
		printf("calling for sorting in the List \n");
		start=sort_list(start,n_nodes);
		display(start);
		break;	
	
	case '7':
		
		printf("Exit from Main \n");
		exit(1);
	
	default:
		printf("Invalid Case \n");
	
		}
	
	}

}



struct  node *create_list(struct node *start,int n_nodes)
{

	
	
	int i=0;
	
	int roll_no,grade;
	
	char name[20];
	
	start=NULL;
	
	if(n_nodes==0)
	{

		return start;
	}
	
	printf("Enter roll_no \n");
	scanf("%d",&roll_no);
	
	printf("Enter grade \n");
	scanf("%d",&grade);
	
	printf("Enter name ");
	scanf("%s",name);
	
	start=addatbeg(start,roll_no,grade,name);
	
	for(i=2;i<=n_nodes;i++){
		
		    	fflush(stdin);	
		    	printf("Enter roll_no \n");
	            scanf("%d",&roll_no);
       		   
				printf("Enter grade \n");
       		    scanf("%d",&grade);
      		    
				printf("Enter name ");
       		    scanf("%s",name);

				start=addatend(start,roll_no,grade,name);
				
				fflush(stdin);
	}
	
	return start;

}



struct node *addatbeg(struct node *start,int n1,int n2,char n3[])
{

	
	struct node *temp;
	
	temp=(struct node *)malloc(sizeof(struct node));
	temp->roll_no=n1;
	
	temp->grade=n2;
	strcpy(temp->name,n3);
	
	temp->link=start;
	start=temp;
	
	return start;




}


struct node *addatend(struct node *start,int n1,int n2,char n3[])
{
	struct node *p,*temp;
	
	temp=(struct node *)malloc(sizeof(struct node));
	
	temp->roll_no=n1;
    temp->grade=n2;
   	strcpy(temp->name,n3);
	
	p=start;
	
	while(p->link!=NULL)
	{

		p=p->link;
	}
	
	p->link=temp;
	
	temp->link=NULL;
	
	return start;
}





void display(struct node *start)
{
	

	struct node *p;  
	if(start==NULL)
	
	{
		
		printf("List is empty");
		return;
		
	}
	
	p=start;//first node address 1000
	
	while(p!=NULL)
	{
		
		printf("roll no is%d \n",p->roll_no);
		printf("Grade is %d \n",p->grade);
		printf("Name is %s \n",p->name);
		p=p->link;
		
	}	
	
	printf("\n ");
}



void search(struct node *start,int item)
{
	
	
	struct node *p=start;
	int pos=1;
	if(start==NULL)
	{
		printf("list is empty");
		
	}
	while(p->link!=NULL)
	{
		
		if(p->roll_no==item)
		{
			
			printf("item found \n");
			printf("%d \n",item);
	
	}
	p=p->link;
}

	printf("item not found \n");
	
}



struct node *delete(struct node *start,int data)
{
	
	struct node *tmp,*p;
	if(start==NULL)
	{
		
		printf("List is empty \n");
		return start;
	
	}
	if(start->roll_no==data)
	{
		
		tmp=start;
		start=start->link;
		free(tmp);
		return start;
	}
	
	p=start;
	while(p->link!=NULL)
	{
		
		if(p->link->roll_no==data)
		{
			
			
			tmp=p->link;
			p->link=tmp->link;
			free(tmp);
			return start;
		
		}
		p=p->link;
		
	}
		printf("Element %d not found \n",data);
		return start;
}


void Modify_parameter(struct node *start,int old_data,int new_data)
{
	
		struct node *p;	
		p=start;
		while(p!=NULL)
		{
		
				if(p->roll_no==old_data){
				
			
			
							p->roll_no=new_data;
		
					}
				
				else
					{
			
						printf("old_data not Found \n");
		
			
					}
		p=p->link;
	}		
}

struct node *sort_list(struct node *start,int n_nodes)
{
	
	
	
	
	
	struct node *p;
	int i=0;
	int temp1=0,temp2=0;
	char temp_name[100];
	p=start;
	
	for(i=1;i<=n_nodes;i++)
	{
		
			while(p->link!=NULL){


			if((p->roll_no)>(p->link->roll_no)){
			
					temp1=p->roll_no;
					p->roll_no=p->link->roll_no;
					p->link->roll_no=temp1;
			
					temp2=p->grade;
					p->grade=p->link->grade;
					p->link->grade=temp2;
			
					strcpy(temp_name,p->name);
					strcpy(p->name,p->link->name);
					strcpy(p->link->name,temp_name);
			
			}
		p=p->link;
		if(p==NULL)
		{
			break;
		}
	}
	p=start;
	}
	return start;
}

	
	


		
		
		
	
	
		
	
	
	
	
	
	
	
	

		
	
	

