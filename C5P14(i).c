#include<stdio.h>
#include<conio.h>
#define error printf("\nError.\n");
int main(){
	int age;
	printf("Enter your age\n");
	scanf("%d",&age);
	if(age>=18){
		printf("login successful");
	}else{
		error
	}
	return 0;
}
