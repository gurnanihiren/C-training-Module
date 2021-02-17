#include <stdio.h> 
#include <stdlib.h> // For exit() 
  
int main() 
{ 
    FILE *fptr1, *fptr2; 
    char filename[100], c; 
  
   											 // Opening one file for reading.
    fptr1 = fopen("p2.txt", "r"); 
    if (fptr1 == NULL) 
    { 
        printf("Error i Opening File \n"); 
        exit(0); 
    } 
  
    								// Opening another file for writing.
    fptr2 = fopen("p3.txt", "w"); 
    if (fptr2 == NULL) 
    { 
        printf("Cannot open file %s \n", filename); 
        exit(0); 
    } 
  
   								
								    // Reading contents from file.
    c = fgetc(fptr1); 
    while (c != EOF) 
    { 
        fputc(c, fptr2); 
        c = fgetc(fptr1); 
    } 
  
    printf("\nContents copied to %s", filename); 
  
    fclose(fptr1); 
    fclose(fptr2); 
    return 0; 
}
