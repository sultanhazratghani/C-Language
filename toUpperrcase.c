#include<stdio.h>
#include<conio.h>

int main(){
	
	int ch;
	char getlc();
	printf("Type any letter in lowercase\n")	;
	ch=getlc();
	printf("\nconverted to uppercase: %c",ch);
	
	
}
char getlc(){
	char ch;
	ch=getche();
	if (ch>96&&ch<123){
		return (ch-32);
	}else{
		return (ch);
	}
}
