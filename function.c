#include<stdio.h>
#include<conio.h>


char getlc(void);

int main(){
	char chlc;
	printf("Type 'a' for first selection\n Type 'b' for second selection");
	chlc=getlc();
	
	printf("\nconverterd to lower case: %c",chlc);DDD
	
	/*switch(chlc)                                        //***additional
		{
			case 'a':
				printf("\n you have typed %c",chlc);
			
			case 'b':
				printf("\n you have typed %c",chlc);
			
			default:
				printf("\n invalid option %c");	
		}*/
	
	
	
	return 0;
}

char getlc(){
	char chlc;
	
	chlc=getche();
	if(chlc>64&& chlc<91){
		chlc+=32;
	}
	return (chlc);
}
