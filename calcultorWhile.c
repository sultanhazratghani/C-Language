#include<stdio.h>

void main(){
	
	float num1=1.0,num2=1.0;
	char op;
	char ch;
	
	while(!(ch=='e'||ch=='E')){
		printf("Type first number, operator and second number \n ");
		scanf("%f %c %f",&num1,&op,&num2);
		if (op=='+'){
			printf("%f",num1+num2);
		}
		else if(op=='-'){
			printf("%f",num1-num2);
		}
		else if(op=='*'){
			printf("%f",num1*num2);
		}
		else if (op=='/'){
			printf("%f",num1/num2);
		}
		printf("\npress enter to continue\n");
		printf("press e to exit\n");
		ch=getche();
		
		printf("\nThanks for using my calculator");
	}
	
}
