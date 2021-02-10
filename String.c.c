


#include<stdio.h>
#include<stdlib.h>

#define SIZE 100

typedef char char8_t;
typedef int int32_t;
void main()
{
	
	
	char choice;
	
	while(1)
	{
		
		printf("1.Print individual character of string in Reverse Order \n");
		printf("2.Count total no of words in a string \n");
		printf("3.Count total no of digits,alphabets and special characters in a string \n");
		printf("4.Copy one string to another string \n");
		printf("5.Count frequency of each character in a string ");
		
		
	
		printf("Enter a choice \n");
		scanf(" %c",&choice);
		
				
	
	switch(choice)
	{
		
		case '1':
			{
						char8_t carr[SIZE],temp;					//Declaring variables and a character array.
						int32_t i_var,j_var,length=0;
	
						printf("Enter a string \n"); 	//Entering a string  from user
						scanf("%s",carr);
	
						for(i_var=0;carr[i_var]!='\0';i_var++){										//counting a string length
	
		
							length++;
		
						}		
	
						printf("string Length=%d \n",length);
	
						for(i_var=0,j_var=length-1;i_var<j_var;i_var++,j_var--){				//Reversing a string 
		
		
						temp=carr[i_var];
						carr[i_var]=carr[j_var];
						carr[j_var]=temp;
					
					
						}			
	
						printf("Reverse string is %s \n",carr);
						
						break;
		
		}
		case '2':
			{
				
				char8_t carr[SIZE];
				int32_t i_var;
				int32_t count_words=1;
		
				printf("Enter a string \n");
				gets(carr);
          	//	scanf("[^\n]%s",carr);
				for(i_var=0;carr[i_var]!='\0';i_var++){
		
		
			
				if(carr[i_var]==' ' &&  carr[i_var+1]!=' '){
					
						
						count_words++;	
					
				}
			
			
			}
			printf("No of words in a string are %d \n",count_words);	
				
				
				
			break;	
			}
		 case '3':
		 	{
		 		
		 		char8_t carr[SIZE];
				int32_t i,j;
				int32_t count_alphabets=0,count_digits=0,count_special_character=0;
				
				fflush(stdin);
		
				printf("Enter a string \n");			//Entering string using user
				scanf("%s",carr);
				//gets(carr);						
		
		
				for(i=0;carr[i]!='\0';i++){				//searching for special character,digit or alphabet.
			
				if(carr[i]>='A' && carr[i]<='Z' || carr[i]>='a' && carr[i]<='z'){
				
						
						count_alphabets++;
	
				}
				else if(carr[i]>='0'  && carr[i]<='9'){
			
						count_digits++;
			
				}
				else{
			
						count_special_character++;
						
				}			
			
			}
			printf("no of alphabets in a given string=%d \n",count_alphabets);
		
			printf("no of digits in a given string=%d \n",count_digits);
		
			printf("special characters in a given string=%d \n",count_special_character);
		
			break;
		
		}
	case '4':
		{
			
				char8_t carr[SIZE];
				char8_t iarr[SIZE];
				int32_t i;
				char8_t *ptr;	
	
				printf("Enter a string \n");
				scanf("%s",carr);
				
					
				for(i=0;carr[i]!='\0';i++){
		
						iarr[i]=carr[i];
		
				}
				iarr[i]='\0';
	
				printf("copied string is");
				printf("%s",iarr);
				
				break;
			
			
			
			
		}
	
	case '5':
	{
		
		char8_t carr[SIZE];
		int32_t freq[26]={0};
			
		int32_t count=0,i=0;

		printf("Enter a string \n");
		//scanf("%s",carr);
	    scanf("%s",carr);
	    fflush(stdin);
		for(i=0;carr[i]!='\0';i++)
		{
			
				if(carr[i]>='a' && carr[i]<='z')
				{
					
					freq[carr[i]-97]++;
					
				}

				else if(carr[i]>='A' && carr[i]<='Z')
				{
					
					freq[carr[i]-65]++;
				
				}
				
		}
		
		for(i=0;freq[i]!='\0';i++){
			
			if(freq[i]!=0)
			{
						
				printf("%c occurs %d times",carr[i],freq[i]);		
				
			}
		}	
		break;
	}
	
	case '6':
	{
	
		printf("Exit \n");
		exit(1);
		
	}
	default:
		{
			printf("Invalid Case \n");
		}

	}
}
}
		 		
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 		
		 		
		 		
		    
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	


	
				
				
				
				
			
	
			
		
		
		
		
		

	
	

