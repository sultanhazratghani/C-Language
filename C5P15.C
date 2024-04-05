#include<stdio.h>
#include<conio.h>
#define pi 3.142
#define AREA(X) (4 * pi * X * X)

int main (){
	float radius;
	printf("Enter radius of the sphere\nRadius: ");
	scanf("%f",&radius);
	printf("Area: %.2f",AREA(radius));
    
    
}
