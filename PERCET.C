#include<stdio.h>
#include<conio.h>
void main ()
{
int a,b,c; // individual marks of three subjects to take from user
int s; // total marks obtained
int t=300;//total marks
float p; //percentage variable
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
s=a+b+c;
printf("total marks obtained is=%d\n",s);
p=100*s/t;
printf("your percentage is %1f\n",p);
printf("==========================\n");
getch();
}
