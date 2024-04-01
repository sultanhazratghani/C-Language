#include<stdio.h>
int main ()
{
    char character ;
    double num1;
    double num2;
     printf ("please enter an operation \n (+,-,*,/)");
     scanf("%c",&character);
     
     printf("please enter your first number\n");
     scanf("%lf",&num1);
     
     printf("please enter your second number\n");
     scanf("%lf",&num2);
     
      switch (character)
	 {
	 	case '+':
	 		printf("result is : %lf",num1+num2);
	 		
	 		case '-':
	 		printf("result is : %lf",num1-num2);
	 		
	 		case '*':
	 		printf("result is : %lf",num1*num2);
	 		
	 		case '/':
	 		printf("result is : %lf",num1/num2);
	 		
	 		break;
	 		
	 	        default:
	 			printf("%c is invalid",character);
	 	
	 }
    
     
	return 0;
	getch();
	
}
