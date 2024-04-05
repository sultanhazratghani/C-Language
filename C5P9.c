#include<stdio.h>
#include<conio.h>



void rectangle(int, int);

int main(){
	
	printf("\nLiving Room\n");
	rectangle(10,50);
	printf("\nCloset\n");
	rectangle(15,20);
	printf("\nKitchen\n");
	rectangle(20,100);
	printf("\nBathroom\n");
	rectangle(10,10);
	
	getch();
	return 0;
}

void rectangle(int length, int width){
	
	int i,j;
	

	for(i=0;i<length;i++){
		
		printf("\t\t");
		for(j=0;j<=width;j++){
			
			printf("\xdb");
		}
		printf("\n");
	}
	
}
