#include<stdio.h>

void twoBeep(void);

int main(){
	twoBeep();
	printf("Type any character");
	getche();
	twoBeep();
	return 0;
}

void twoBeep (){
	long j;
	printf("\x7");
	for(j=0;j<10000;j++)
		{
			printf("%d",j);
		}
	printf("\x7");	
}



