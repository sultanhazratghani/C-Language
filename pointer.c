#include<stdio.h>

int main (){
	
	// pointer is a variable that hold address of another
	// of variable
	
	int *p,**q,a=10;
	p=&a;
	q=&p;
	
	printf("%d\n",a); // value of a =10
	printf("%d\n",&a); // address of a
	printf("%d\n",p); // address of a 
	printf("%d\n",*p); // 10
	printf("%d\n",q); // address of p
	printf("%d\n",*q); 
	printf("%d\n",**q);
	
	return 0;
}
