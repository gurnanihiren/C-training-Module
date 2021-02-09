

/*

	purpose Function returning multiple values.
	pacakges-
	File-p2.4.7.c
	04/02/2021
	
	*/


#include<stdio.h>


//typedef int int32_t;

//void vsimpleFunction(int32_t *p_var,int32_t *q_var);   //Funcion declaration.


void add(int,int);
void subtract(it ,int);


/*

	parameter 1-int *p
	parameter 2-int *q
	
*/

void main()
{
	
//	int32_t a,b;
	
	int a,b;								
	printf("Enter the value of a and b \n");
	scanf("%d %d",&a,&b);
	
	
	void (*fp)(int ,int );	
	//vsimpleFunction(&a,&b);          //Function calling
	
	fp=add;				//Assigning address of add Function to fp.
	
	//add(a,b);

	(*fp)(a,b);
	
	
	
	fp=subtract;	//Assigning address of subtract to fp.

//	printf("a=%d \n",a);
//	printf("b=%d \n",b);
	
	(*fp)(a,b);	
}




void add(int p ,int q)
{
	int sum;
	sum=p+q;
	printf("sum=%d \n",sum);
	
}
void subtract(int ,int)
{
	
	
	int sub;
	sub=a-b;
	printf("sub=%d \n",sub);
	
}


/*
void vsimpleFunction(int32_t *p_var,int32_t *q_var)
{
	
	(*p_var)++;				//Incrementing value of a and b using pointer p and q.		
	(*q_var)++;
	
}

*/

