
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 100
#define SIZE 100

/* Function declarations */
int countOccurrences(FILE *fptr, const char *word);


int main()
{
    FILE *fptr;
    
    char str[SIZE];

    char word[SIZE];

    int wCount;

    fptr=fopen("p2.txt","w");
    if(fptr==NULL){
    	
    	printf("Error in opening File \n");
    	exit(0);
    	
	}
	
	fgets(str,80,stdin);{
		
		fputs(str,fptr);
	}
    fclose(fptr);
	
	fptr = fopen("p2.txt", "r");
    
	if (fptr == NULL)
    {
        printf("Unable to open file.\n");
        printf("Please check you have read/write previleges.\n");

        exit(0);
    }
    
     printf("Enter word to search in file: ");
     scanf("%s", word);

  
     wCount = countOccurrences(fptr, word);
	 printf("'%s' is found %d times in file.", word, wCount);


    
    fclose(fptr);

    return 0;
}

int countOccurrences(FILE *fptr, const char *word)
{
    char str[BUFFER_SIZE];
    char *pos;

    int index, count;
    
    count = 0;

    
    while ((fgets(str, BUFFER_SIZE, fptr)) != NULL)
    {
        index = 0;

        // Find next occurrence of word in str
       while ((pos = strstr(str + index, word)) != NULL)
        {
            // Index of word in str is
            // Memory address of pos - memory
            // address of str.
            
            index = (pos - str) + 1;
            

            count++;
        }
    }
/*
str=1000
word=2000
index=0;

I love the c programming.
012345678911111111112222.
		  01234567890123.
		  
t h e
2 2 2.
0 0 0.
0 0 0. 
0 1 2.

p=2000
index=2000-1007+1
index=994+
*/

/*while((pos=strstr(str,word))!=NULL)
    {
    	
    	count++;
    
	} */

    return count; 
}





