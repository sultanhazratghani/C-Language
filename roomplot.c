#include<stdio.h>
#include<conio.h>

void rectangle(int, int);

int main(void){
	
	printf("Living room");
	rectangle(21,12);
	printf("\nCloser\n");
	rectangle(4,4);
	printf("\nKitchen\n");
	rectangle(16,16);
	printf("\nBathroom\n");
	rectangle(6,8);
	printf("\nBedroom\n");
	rectangle(12,12);
	
	return 0;
	getch();
}

void rectangle(int length, int width){
	int i,j;
	length /=2;
	width /=4;
	for( i=0;i<=width;i++){
		printf("\t\t");
		for(j=0;j<=length;j++){
			printf("\xdb");
		}
		printf("\n");
	
	}
	
}
