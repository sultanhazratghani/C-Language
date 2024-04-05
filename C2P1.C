#include<stdio.h>
#include<conio.h>

/*int apples,oranges, cherries;
char ch1,ch2;
long int number;
unsigned int;
unsigned char;
unsigned long;
unsigned long int;
short;
unsigned short;*/

//the unsigned int type holds number from 0 to -65,535, rather than from
// -32,768 to 32,767 as the regular int type does.
void main (void)
{


//declaring variables.
int event;
char heat;
float time;

clrscr();

//defining variables.
event=5;
heat='C';
time =27.25;

printf("The winning time in heat %c ",heat);
printf("of event %d was %f.",event,time);

getch();
}