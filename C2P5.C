// FIELD-WIDTH SPECIFIERS

#include<stdio.h>
#include<conio.h>

void main (void)
{
int event=5;
char heat='C';
float time=27.25;

clrscr();

printf("The winning time in heat %c ", heat);
printf("of event %d was %.3f", event, time);

getch();

}