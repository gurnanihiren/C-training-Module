#include<stdio.h>
#include<stdlib.h>

#define SIZE 100
#define MAX_CHARS 255

typedef char char8_t;
typedef int int32_t;
void main()
{
	
	
	char choice;
	char carr[SIZE];
	
		printf("Enter a string to perform some operations \n");
		fgets(carr,SIZE,stdin);
		
	
	while(1)
	{
		
		printf("1.Print individual character of string in Reverse Order \n");
		printf("2.Count total no of words in a string \n");
		printf("3.Count total no of digits,alphabets and special characters in a string \n");
		printf("4.Copy one string to another string \n");
		printf("5.Count frequency of each character in a string \n ");
		printf("6.Exit \n");
			
		
	
	
		printf("Enter a choice \n");
		scanf(" %c",&choice);
		
		/*printf("Enter a string \n");
		fgets(carr,SIZE,stdin);*/
				
	
	switch(choice)
	{
		
		case '1':
			{
										//Declaring variables and a character array.
						int32_t i,j,length=0,temp=0;
	
						for(i=0;carr[i]!='\0';i++){										//counting a string length
	
		
							length++;
		
						}		
	
						printf("string Length=%d \n",length);
	
						for(i=0,j=length-1;i<j;i++,j--){				//Reversing a string 
		
		
						temp=carr[i];
						carr[i]=carr[j];
						carr[j]=temp;
					
					
						}			
	
						printf("Reverse string is %s \n",carr);
						
						break;
		
		}
		case '2':
			{
				
			
				int32_t i;
				int32_t count_words=1;
				
				for(i=0;carr[i]!='\0';i++){
		
		
			
				if(carr[i]==' ' &&  carr[i+1]!=' '){
					
						
						count_words++;	
					
				}
			
			
			}
			printf("No of words in a string are %d \n",count_words);	
				
				
				
			break;	
			}
		 case '3':
		 	{
		 		
		 		
				int32_t i,j;
				int32_t count_alphabets=0,count_digits=0,count_special_character=0;						
		
		
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
				char8_t prr[SIZE];
				char8_t iarr[SIZE];
				fflush(stdin);
				int32_t i;
				printf("Enter string \n");
				fgets(prr,SIZE,stdin);
				for(i=0;carr[i]!='\0';i++){
		
						iarr[i]=prr[i];
		
				}
				iarr[i]='\0';
	
				printf("copied string is");
				printf("%s",iarr);
				
				break;
			
			
			
			
		}
	
	case '5':
	{
  
  
  	#define MAX_CHARS 255 // Maximum characters allowed
    
    int freq[MAX_CHARS]; // Store frequency of each character
    int i = 0, max;
    int ascii;

    /* Initializes frequency of all characters to 0 */
    for(i=0; i<MAX_CHARS; i++)
    {
        freq[i] = 0;
    }


    /* Finds frequency of each characters */
    i=0;
    while(carr[i] != '\0')
    {
        ascii = (int)carr[i];
        freq[ascii] += 1;

        i++;
    }


    /* Finds maximum frequency */
    max = 0;
    for(i=0; i<MAX_CHARS; i++)
    {
        if(freq[i] > freq[max])
            max = i;
    }


    printf("Maximum occurring character is '%c' = %d times.", max, freq[max]);
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

