

#include <stdio.h>
#include<stdlib.h>
        void main()
 {
         
          FILE *fp1;
          int vowel=0,consonant=0;
          int ch;
          fp1=fopen("p2.txt","w");
          
		  if(fp1==NULL){
                    printf("Source can't be opened");
                    exit(0);
            }
            
			while((ch=getchar())!=EOF)
            {
            	fputc(ch,fp1);
            	
			}
			fclose(fp1);
		   // ch=fgetc(fp1);
		    
		    
		    fp1=fopen("p2.txt","r");
		    if(fp1==fopen("p2.txt","r"))
		    if(fp1==NULL)
		    {
		    	
		    	printf("source cant be opened");
		    	exit(0);
		    	
			}
			ch=fgetc(fp1);
            while(ch!=EOF)
                {
                       if((ch=='a') || (ch=='A')|| (ch=='e')|| (ch=='E')|| (ch=='i')||( ch=='I')|| (ch=='o') || (ch=='O') || (ch=='u')|| (ch=='U')){
                               
							   vowel++;
                          }
                      else{
                          
								consonant++;
                         
						 }
                           ch=fgetc(fp1);
                }
                             
				printf("\n Number of vowels are = %d",vowel);
     			                      
	} 
