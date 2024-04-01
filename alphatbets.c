#include<stdio.h>
#include<conio.h>
void capital(void);
void small(void);
int main(){
	int i;
		
	
	char ch;
	printf("do you want to print captial letter or small letters ?\n select any one option,");
	printf("a) Capital letters /nb) small letters \n");
	scanf("%c",&ch);
	
	switch (ch){
		case 'a':
			{
				 capital();
			}
		case 'b':
			{
				 small();
			}
		default:
			{
				printf("invalid option");
			}
	
	}
	
void capital(){
	int i;
	for (i=65;i<=90;i++){
		printf("%c\t",i);
	}

}
	
void small(){
int i;
	for(i=97;i<=122;i++){
		printf("%c\t",i);
	}

}
return 0;
}
