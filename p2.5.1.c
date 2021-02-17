


//simple #includes.
#include<Stdio.h>
#define MSSG "Hello How are you"
#define ERROR printf("This is wrong \n");
#define NEWLINE printf("\n");
#define AND &&
#define OR ||


//Parameterized Macro.
#define SUM(x,y) (x)+(y)
#define PROD(x,y) ((x)*(y))
#define MAX(x,y)	((x)>(y)?(x):(y))
#define MIN(x,y)	((x)<(y)?(x):(y))

//Nesting in Macros

#define ISLOWER(c) (c>=97 AND c<=122)
#define ISUPPER(c) (c>=65  AND c<=90)
#define ISALPHA(c)  (islower(c) OR isupper(c))

#define PI 3.13
#define PISQUARE PI*PI


//stringzing Operator.

//#define SHOW(var) printf(""var=%d",var);

#define SHOW(var)	printf(#var"=%d",var);
#define SHOWINFORMAT(var,format) printf(#var"=%"#format,var);


//Token passing Operator.

#define PASTE(a,b)  a##b
#define MARKS(subject)  marks_##subject





//problems with Macros.

/*

#define PROD(x,y) x*y

2*3=6 works completely Fine
but 2+3*4+2 does not works precedence of * greater than +
so ans is 16 but should be 30. so adding one bracket.

#define PROD(x,y) (x)*(y)

The above prblm is solved  but is 
we use 60/PROD(2,3)---60/2*3 associativity left to right
so ans is 90 instead of 10.

again adding a bracket
#define PROD(x,y)  ((x)*(y))
 
*/

void main()
{
	
	//simple includes
	printf(MSSG);
	NEWLINE
	ERROR
	
	//variable declaration
	int a=10,b=11,c=15,ans=0;
	int k2=10,k3=15;
	int marks_chemistry=50,marks_maths=60;
	char ch='A';
	if(a>b AND a>c)
	{
		
		printf("a is largest");
	}
	
	
	//parameterized Macro
	ans=SUM(a,b);
	printf("sum=%d \n",ans);
	
	ans=PROD(a,b);
	printf("ans=%d \n",ans);
	
	ans=MAX(a,b);
	printf("ans=%d \n",ans);
	
	ans=MIN(a,b);
	printf("ans=%d \n",ans);
	
	//Nesting macro
	
	printf("Enter a character \n");
	scanf(" %c",&ch);
	
	
	if(isalpha(ch))
	{
		
		printf("This is not a Alphanumeric character \n");
	}
	else
	{
		
		printf("This is alphanumeric character \n");
	}
	
	printf("%f",PI);
	printf("%f",PISQUARE);


	//stringzing Operator.
	SHOW(a);
	NEWLINE
	SHOWINFORMAT(a,d)	
	NEWLINE

	//Token passing Operator.
	
	printf("%d",PASTE(k,2));
	NEWLINE
	printf("%d",PASTE(k,3));
	NEWLINE
	printf("%d",MARKS(chemistry));
	NEWLINE
	printf("%d",MARKS(maths));
		
	




}
		




