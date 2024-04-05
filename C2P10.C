// sum square function program


#include<stdio.h>
#include<conio.h>

int sumsqr(int, int);
int sqr(int);
int sum(int, int);

int main(){
	int num1,num2;
	
	printf("Enter two number\n");
	scanf("%d\n",&num1);
	scanf("%d",&num2);
	printf("sum of the square is %d",sumsqr(num1, num2));
	
}

int sqr(int num){
	return (num * num);
}

int sum(int x, int y){
	
	return (x + y);
}
int sumsqr(int num1, int num2){
	
	return (sqr(num1) + sqr(num2));
	
}


