#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<semaphore.h>


sem_t p1;
void *add(void *arg)
{
	int n;
	sem_wait(&p1);    				 //decrements the value to zero and does not increments to 1 till thread is finished executing in critical section.
	printf("Entering critical section \n");  	 //critical section.
	
	int a,b,ans;

	printf("Enter a and b \n");
	scanf("%d %d",&a,&b);


	sem_post(&p1); 					  //increments to the value to 1 as resources are open to execute another thread/process.

	printf("leaving critical section \n");	

}


void *subtract(void *arg)
{
//	int a,b;

	sem_wait(&p1);	
	int n;							//as soon as this threads starts again value of semaphore becomes 0
	printf("Entering critical section \n");
	
	int a,b;
	scanf("%d %d",&a,&b);
	
	printf("Leaving critical system \n");
	sem_post(&p1);

}


void main()
{
	
	sem_init(&p1,0,1);
	
	

	pthread_t t1,t2;
	int n1,n2;
	n1=pthread_create(&t1,NULL,add,NULL);
	if(n1==0)
	{
		
		printf("thread 1 created successfully \n");
	}
	sleep(10);
	pthread_join(t1,NULL);
					//At this point value of semaphore object is again 1 after post operation.
	pthread_join(t1,NULL); 
	n2=pthread_create(&t2,NULL,subtract,NULL);
	if(n2==0)
	{
		
		printf("thread 2 created successfully \n");
		
	}

	pthread_join(t2,NULL);
	sem_destroy(&p1);
	
}
		
	
	
	
	

