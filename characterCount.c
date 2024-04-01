// making a letters count program in c language 
#include<stdio.h>
#include<conio.h>
int main ()
{
	
	int totalChar;
	int totalWords;
	char ch;
	do
	{
		ch = getche();
		if(ch==' '){
			printf("%c",ch);
			totalWords++;
		}
		else {
			totalChar++;
		}
		
	}
	while (ch!='\r');
	printf("\n%d\n",totalChar);
	printf("%d",totalWords);
	return 0;
}
