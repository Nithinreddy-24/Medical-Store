//medical store billing system
#include<stdio.h>
int y,rate,total,i;
void bill()
{
	printf("enter 1 to continue and 2 to print bill : ");
	scanf("%d",&y);
	
	if (y==1)
	{
		main();
		
	}
	else
	{
		 printf("\n\nYour total amount is  : %d",total);
	}
}
int main()
{	
	printf("-------------MEDICAL STORE---------------");
	printf("\n1.injections");
	printf("\n2.Syrups");
	printf("\n3.Tablets");
	printf("\n4.Print Bill");
	printf("\nEnter Category : ");
	scanf("%d",&y);;
	
	switch(y){
				case 1:
		printf("\n1.chicken pox-------------------Rs.500");
		printf("\n2.insulin-----------------------Rs.500");
		printf("\n3.fentanyl ---------------------Rs.100");
		printf("\n4.Anesthesia--------------------Rs.2000");
		printf("\n5.Back");
		printf("Enter Choice : ");
		scanf("%d",&y);
		printf("Enter Quantity : ");
		scanf("%d",&i);
					
						switch(y)
						{
							case 1:
					
							rate=500;
							total+=rate*i;
					    
							break;
							
							case 2:
					
							rate=500;
							total+=rate*i;
					    
							break;
							case 3:
								
							rate=100;
							total+=rate*i;
					    
							break;
							case 4:
					
							rate=2000;
							total+=rate*i;
					    
							break;
							case 5:
								main();
								break;
					
						
						}
							
					  
					break;
				case 2:
					printf("\n1.Benadryl----------------------Rs.100");
					printf("\n2.Cyclopam----------------------Rs.100");
					printf("\n3.Zincovit ---------------------Rs.100");
					printf("\n4.Multivitamin------------------Rs.100");
					printf("\n5.Back");
					printf("Enter Choice : ");
					scanf("%d",&y);
					printf("Enter Quantity : ");
					scanf("%d",&i);
					
						switch(y)
						{
							case 1:
					
							rate=100;
							total+=rate*i;
					    
							break;
							
							case 2:
					
							rate=100;
							total+=rate*i;
					    
							break;
							case 3:
								
							rate=100;
							total+=rate*i;
					    
							break;
							case 4:
					
							rate=100;
							total+=rate*i;
					    
							break;
							case 5:
								main();
								break;
					
					
							}	
					    
					break;
				case 3:
					printf("\n1.Paracetemol-------------------Rs.50");
					printf("\n2.Dextromethorphan -------------Rs.100");
					printf("\n3.Aztreonam.  ------------------Rs.200");
					printf("\n4.Buscogast---------------------Rs.100");
					printf("\n5.Saridon-----------------------Rs.50");
					printf("\n6.Back");
					printf("Enter Choice : ");
					scanf("%d",&y);
					printf("Enter Quantity : ");
					scanf("%d",&i);
					
						switch(y)
						{
							case 1:
					
							rate=50;
							total+=rate*i;
					    
							break;
							
							case 2:
					
							rate=100;
							total+=rate*i;
					    
							break;
							case 3:
								
							rate=200;
							total+=rate*i;
					    
							break;
							case 4:
					
							rate=100;
							total+=rate*i;
					    	
					    	break;
					    	
							case 5:
							rate=50;
							total+=rate*i;
							break;
							case 6:
								main();
								break;
					
					
							}
							
					  
					    
					break;
				case 4:
					  printf("\n\nYour total amount is  : %d",total);
					  break;
				}
				bill();
			
			
}

