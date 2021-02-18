#include <stdio.h> 
#include <stdlib.h> 
  
int main(int argc,char *argv[]) 
{ 
    FILE *fptr1, *fptr2; 
    int c; 
    
    if(argc<0 && argc>3)
    {
    	printf("Less Amount of Inputs Supplied\n");
    	exit(0);
 	}
    
	fptr1 = fopen(argv[1], "r"); 
    if (fptr1 == NULL){ 
        printf("Error in Opening File\n"); 
        exit(0); 
    }
	
    fptr2 = fopen(argv[2],"w"); 
    
	if (fptr2 == NULL){ 
        printf("Cannot open file %s \n"); 
        exit(0); 
    } 
    
	c = fgetc(fptr1); 
    while (c != EOF){ 
       
	    fputc(c, fptr2); 
        c = fgetc(fptr1); 
        
    }
    printf("Contents copied to File \n"); 
    
	fclose(fptr1); 
    fclose(fptr2); 
    return 0; 
}
