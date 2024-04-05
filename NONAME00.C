#include<stdio.h>
#include<conio.h>
void main ()
{
int a,b,c,s,t;
int p;
s=a+b+c;
t=300;
clrscr();
printf("enter your english marks\n");
printf("==========================\n");
scanf ("%d",&a);
printf("==========================\n");
printf("enter your computer marks\n");
printf("==========================\n");
scanf ("%d",&b);
printf("==========================\n");
printf("enter your physics marks\n");
printf("==========================\n");
scanf ("%d",&c);
p=s/t*100;
printf("your percentage is %d\n",p);
printf("==========================\n");
getch();
}
