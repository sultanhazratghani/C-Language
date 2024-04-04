#include<stdio.h>
#include<conio.h>

int main(){
	
	int ch;
	char getlc();
	printf("Type any letter in uppercase\n")	;
	ch=getlc();
	printf("\nconverted to lowercase: %c",ch);
	
	
}
char getlc(){
	char ch;
	ch=getche();
	if (ch>64&&ch<91){
		return (ch+32);
	}else{
		return (ch);
	}
}
