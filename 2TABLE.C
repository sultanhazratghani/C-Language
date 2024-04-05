#include<stdio.h>
#include<conio.h>
void main (void)
{
int a,b,c;
clrscr();
printf("Table of two any number you enter\n");
scanf ("%d",&a);
for(b=1;b<=10;b++)
{
c=a*b;
printf ("\t%dx%d=%d\n",a,b,c);
}
getch();
}



