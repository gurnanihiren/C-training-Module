

#include<stdio.h>
#include<math.h>
int main()
{
	
	char choice;
	float cooling_range=0;
	float temperature=0;
	float A=0,B=0,C=0;
	float thermal_range=0;
	float min_cooling_range=20;
	
	printf("Enter a choice \n");
	scanf(" %c",&choice);
	switch(choice)
	{
		
		case '0':
			
				printf("Manual Mode \n");
				printf("Enter the cooling range as per 	your requirement \n");
				printf("Range should be between 20 and 100 \n");
				if(cooling_range<20.0  && cooling_range>100.0)
				{
					
					printf("Invalid selection of cooling_temperature \n");
					
				}
				else
				{
					
					printf("Enter cooling temperature \n ");
					scanf("%f",&cooling_range);
					printf("cooling_range=%f \n",cooling_range);
				
				}
				break;
				
		
		case '1':
			
				printf("Open Loop Mode \n");
				
				printf("Enter temperature \n");
				scanf("%f",&temperature);
				if(temperature==0)
				{
					
					printf("Table selected None \n");
					return;
					
				}
			
				if(temperature>=0 && temperature<=25)
				{
					
					printf("Table A selected \n");
					A=0.0202;
					B=-0.2245;
					C=15.36;
					cooling_range=(A*pow(temperature,2))+(B*temperature)+C;
					printf("cooling range set to %f",cooling_range);
					
					
					
				}
				else if(temperature>=26 && temperature<=50)
				{
					
					printf("Table B selected \n");
					A=0;
					B=0;
					C=80;
					cooling_range=(A*pow(temperature,2))+(B*temperature)+C;
					printf("cooling range set to %f",cooling_range);
					
				}
				else if(temperature>=51 && temperature<=75)
				{
					
					
					printf("Table c selected \n");
					A=0.202;
					B=-0.3345;
					C=45.36;
					cooling_range=(A*pow(temperature,2))+(B*temperature)+C;
					printf("cooling Range=%f \n",cooling_range);
					
				}
				else if(temperature>=76 && temperature<=100)
				{
					
					
					printf("Table D selected \n");
					A=0;
					B=0;
					C=100;
					cooling_range=(A*pow(temperature,2))+(B*temperature)+C;
					printf("cooling Range =%f \n",cooling_range);
				}
				
				
				else
				{
					
					printf("Invalid Temperature Value \n");
					
				}
				
				
				break;
			
		case '2':
			
				printf("Closed loop mode \n");
				printf("Enter Cooling range between 20 and 100\n");
				scanf("%f",&cooling_range);
				
				if(cooling_range<20 && cooling_range>100)
				{
					
					printf("Minimum and Maximum cooling Value exceeds \n");
					return;
				}
				
				printf("Enter temperature Value \n");
				scanf("%f",&temperature);
				
				if(temperature==0)
				{
					
					thermal_range=0;
					
					
				}
				else if(temperature>=0 && temperature<=25)
				{
					
					A=0.0202;
					B=(-0.2245);
					C=15.36;
					thermal_range=(A*pow(temperature,2))+(B*temperature)+C;
					printf("Thermal_range=%f \n",thermal_range);
					
					
					
				}
				else if(temperature>=0 && temperature<=25)
				{
				
				
					printf("Table B selected \n");
					A=0;
					B=0;
					C=80;
					thermal_range=(A*pow(temperature,2))+(B*temperature)+C;
					printf("thermal_range=%f \n",thermal_range);					
					
				}
				else if(temperature>=0 && temperature<=25)
				{
					
					
					
					printf("Table c selected \n");
					A=0.202;
					B=-0.3345;
					C=45.36;
					thermal_range=(A*pow(temperature,2))+(B*temperature)+C;
					printf("thermal_range=%f \n",thermal_range);	
					
					
				}
				else
				{
					printf("Table D selected \n");
					A=0;
					B=0;
					C=100;
					thermal_range=(A*pow(temperature,2))+(B*temperature)+C;
					printf("thermal_range=%f \n",thermal_range);	
					
					
					
				}
				if(cooling_range>=thermal_range && cooling_range>=min_cooling_range)
				{
					
					
						printf("cooling_range is Max of all \n");
				}
				else if(thermal_range>=cooling_range && thermal_range>=min_cooling_range)
				{
					
					
					printf("Thermal range is maximum \n");
					
				}
				else
				{
					
					
					printf("min_cooling_range is maximum");
				}
				
				break;
				
		
		
			case '4':
			{
				
				printf("Invalid Choice \n");
				break;
				
			}
	
		}
	
	
}
	
	
	
	
	

