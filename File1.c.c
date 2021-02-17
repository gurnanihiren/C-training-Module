
#include<stdio.h>
int main(char argc,char *argv[])
{
	
	
	
	int ch;
	int i=0;
	char str[100];
	if(argc<2)
	{
		
		printf("Less no of Inputs from command Line arguments \n");
		return 0;
	
	}
		
	FILE *fp=fopen("argv[1]","argv[2]");
	if(fp==NULL)
	{
		
		printf("Error in opening File \n");
		
	
	}
	else
	{
	
	//while((ch=getchar())!=EOF)
	printf("Enter data to write in file \n");
	while((fgets(str,80,stdin))!=NULL)
	{
		
		
		fputs(str,fp);
		
	}
}
	fclose(fp);									//closing File
	fp=fopen("argv[1]","argv[2]");
	if(fp==NULL)
	{
		
		printf("Error in opening File \n");
	
	}
	while(fgets(str,10,fp)!=NULL)
	{
	
	}
	printf("%s",str);
	for(i=0; str[i]!='\0'; i++)
   {
      printf("%c", str[i]);

      if(str[i]==' ')
      {
         printf("\n");
      }
   }
	
}
