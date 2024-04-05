// the printf() function. and format specifiers

#include<stdio.h>
#include<conio.h>

void main (void)
{
clrscr();
printf("single character:%c\n",'a');
printf("string:%s","sultan\n");
printf("signed decimal integer: %d\n",-534);
printf("floating point:%f\n",25.2356);
printf("floating point (exponential notation):%e",25e6);

getch();
}