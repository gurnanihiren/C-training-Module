

/*

	purpose Function returning multiple values.
	pacakges-
	File-p2.4.7.c
	04/02/2021
	
	*/


#include<stdio.h>


typedef int int32_t;

void vsimpleFunction(int32_t *p_var,int32_t *q_var);   //Funcion declaration.





/*

	parameter 1-int *p
	parameter 2-int *q
	
*/

void main()
{
	
	int32_t a,b;
	
		printf("Enter the value of a \n");
		scanf("%d",&a);
		printf("Enter the value of b \n");
		scanf("%d",&b);
		vsimpleFunction(&a,&b);          //Function calling


    	printf("a=%d \n",a);
	    printf("b=%d \n",b);
	

}
void vsimpleFunction(int32_t *p_var,int32_t *q_var)
{
	
	(*p_var)++;				//Incrementing value of a and b using pointer p and q.		
	(*q_var)++;
	
}



