//return type float
#include<stdio.h>
#include<conio.h>

float area(float);

void main(){
	float radius;
	printf("Enter radius of the sphere");
	scanf("%f",&radius);
	printf("Area of the sphere is %.2f square unit",area(radius));
	
	getch();
}
float area(float rad){
	return (4 * 3.142 * rad *rad);
}

