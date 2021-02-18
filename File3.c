
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#define BUFFER_SIZE 100
#define SIZE 100


int countOccurrences(FILE *fptr, const char *word);

int main(){
    
	FILE *fptr;
    
    char str[SIZE];

    char word[SIZE];

    int wCount;

    fptr=fopen("p2.txt","w");
    if(fptr==NULL){
    	
    	perror("Error in opening File");
    	printf("errono=%d \n",errno);
    	exit(0);
    	
	}
	printf("Enter string \n");
	
	if(fgets(str,SIZE,stdin)==NULL)		
		perror("Error");
	else	
		fputs(str,fptr);
	
    
	fclose(fptr);
	
	fptr =fopen("p2.txt", "r");
    
	if(fptr == NULL){
        
        perror("Error in opening File");
    	printf("errono=%d \n",errno);

        exit(0);
    }
    
     printf("Enter word to search in file: ");
     scanf("%s", word);

  
     wCount = countOccurrences(fptr, word);
	 printf("'%s' is found %d times in file.", word, wCount);
	 
     fclose(fptr);
     return 0;
}
int countOccurrences(FILE *fptr, const char *word){


    char str[BUFFER_SIZE],*pos;
    int index, count;
    count = 0;
    
    while ((fgets(str, BUFFER_SIZE, fptr)) != NULL){
        index = 0;

        
       while ((pos = strstr(str + index, word)) != NULL){
            index = (pos - str) + 1;
            count++;
        }
    }
    return count; 
}





