#include<stdio.h>
#include<conio.h>


int main(){
	int charcount=0;
	int digitcount=0;
	char ch;
	
	printf("please type any phrase and i will count it for you\n");
	
	while((ch=getche())!='\r'){
		
		charcount++;
		
		
		if(ch > 47 && ch<58){
			digitcount++;
		}
	}
	printf("total characters: %d\n",charcount);
	printf("total digits count: %d",digitcount);
	getch();
}
