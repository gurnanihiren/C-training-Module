
#include<stdio.h>
#define SIZE 100
int main(char argc,char *argv[])
{
	int ch;
	int i=0;
	char str[SIZE];
	
	//jignesh comment:
	// condition: if(argc < 0 && argc > 2)
	if(argc<3){
		
		
		printf("Less no of Inputs from command Line arguments \n");
		return 0;
	
	}
	printf(" argc = %d\n",argc);
	FILE *fp=fopen(argv[1],"w");
	if(fp==NULL){
		
		perror("Folllowing error Occured");
	}
	else{

	printf("Enter data to write in file \n");
	fgets(str,SIZE,stdin);
	fputs(str,fp);
	}
		
	fclose(fp);									
	fp=fopen(argv[1],"r");
	if(fp==NULL){
		
			perror("Folllowing error Occured \n");
	
	}
	if(fgets(str,SIZE,fp)==NULL){
		
		perror("Following Error Occured:");
		
				}			
	 	
   	for(i=0; str[i]!='\0'; i++){
	
      printf("%c", str[i]);

      if(str[i]==' '){
         
		 printf("\n");
      
	   }
	}
}
	
	
