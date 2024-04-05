#include<stdio.h>
#include<conio.h>
int main(){
	
	int i;
	for( i=1; i<=10; i++){
		
		if(i==5)
		break;
		printf("%d",i);
	}
	
	printf("\n program");

	
	 


// do while loop (also known as exit control loop)
// it is executed atleast one time, eventhough the condition is false 

	i=1;
	do{
		printf("\ndo while loop\n");
		i++;
	}
	while(i<=12);
	
	
	
	//design pattern using nested  for loops
	
	i=1; // this will print the number of rows;
	int j=1; // this will print the number of columns;
	
	for(i=1;i<=20;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	
	prinf("\n----------------------------------------\n")		
	prinf("\n----------continue-------------\n")
	
			
	prinf("\n----------continue-------------\n")
			
	prinf("\n----------continue-------------\n")
			
	prinf("\n----------continue-------------\n")
	return 0;
	
	
	
}
