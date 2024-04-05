// the #define Directive

// calculate area of the sphere

#include<stdio.h>
#include<conio.h>
#define PI 3.142

float area(int);
int main (void){
	float radius;
	
	printf("Enter the radius of the sphere in cm.\nRadius: ");
	scanf("%f",&radius);
	printf("Volume: %.2f centimeter square",area(radius));
	
	
	getch();
}
float area(int rad ){
	return ( 4 * PI * rad * rad);
}
