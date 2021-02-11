

//Function Pointer Implementation.

#include<stdio.h>

void add(int ,int );
void subtract(int ,int );



void main()
{
	
	
	int a,b;
	void (*fp)(int ,int );
	fp=add;
	
	printf("Enter a and b \n");
	scanf("%d %d \n",&a,&b);
	
	(*fp)(a,b);
	
	fp=subtract;
	
	
	(*fp)(a,b);
}
void add(int m,int n)
{
	
	int sum;
	sum=m+n;	
	printf("sum=%d \n",sum);

)
void subtract(int m,int n)
{
	int ans;
	ans=m-n;
	printf("ans=%d \n",ans);
	
	
}
