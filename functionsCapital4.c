#include<stdio.h>
#include<conio.h>
int capital(void);
int small(void);
int main(){
	int i;
		
	
	char ch;
	printf("do you want to print captial letter or small letters ?\nselect any one option\n");
	printf("a) Capital letters \nb) small letters \n");
	//scanf("%c",&ch);
	getche();
	if (getche()=='a'){
		capital();
	} else if (getche()=='b')small();
	else 
	printf("invalid option ");
	
	int capital(){
	int i;
	for (i=65;i<=90;i++){
		printf("%5c",i);
	}
	return 0;

	}
	
	int small(){
	int i;
		for(i=97;i<=122;i++){
			printf("%5c ",i);
		}
	return 0;
	}
	
	
	/*switch (ch){
		case :
			{
				capital();
				break;
			}
		case 'b':
			{
				small();
				break;
				 
			}
		default:
			{
				printf("invalid option");
				
			}
	
	}*/
	

return 0;
}
