// external variables

#include<stdio.h>
#include<conio.h>

void evenOdd(void);
void negative(void);
int keynumb; // external variable


int main(){
	
	printf("Enter a number and i will check wheather its odd or negative\n");
	scanf("%d",&keynumb);
	evenOdd();
	negative();
}
void negative(){
	
	if(keynumb%2 ==0){
		printf("Number is even\n");
	}else printf("Number is odd\n");
}
void evenOdd(){
	
	if (keynumb>0){
		printf("number is positive\n");
	}else printf("number is negative\n");
}
