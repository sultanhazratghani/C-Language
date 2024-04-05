#include<stdio.h>
#include<conio.h>
int main ()
{
	// the address operator (&)
	
	int a =2;
	int b =4;
	char c=67;
	printf("value= %d, address= %d\n", a, &a);
	
	printf("value= %d, address= %d\n", b, &b);
	printf("value= %c, address= %d", c, &c);
	
	
	// the getche() function
	
	printf("\ntype any character " );
	c= getche();
	if (c=='\r'){
		printf("\nyou have typed enter ");
	}
	else if(c==' '){
		printf("\nyou have typed space\n");
	}
	else{
	printf("\nThe character you typed is %c\n",c);}
	
	
	printf("post increment");
	int num=0;
	printf("\nNUMBER: %d", num);
	printf("\nNumber: %d", num++);
	printf("\nNumber: %d", num);
	
	printf("\n-------------------------\n");
	printf("pre increment");
	num=0;
	printf("\nNUMBER: %d", num);
	printf("\nNumber: %d", ++num);
	printf("\nNumber: %d", num);
	
	printf("\n-------------------------\n");
	
	printf("post decrement");
	num =0;
	printf("\nNumber: %d",num);
	printf("\nNumber: %d",num--);
	printf("\nNumber: %d",num);
	
	
	
    return 0;
}
