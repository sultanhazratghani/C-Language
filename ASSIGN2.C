#include<stdio.h>
#include<conio.h>
void main (void)
{
float F;
float C;
clrscr();
C=5*(F-32)/9;
printf("please enter a value of temprature \n ");
scanf("%f",&F);
printf("The temprature given in Fahrenheit is %f\n",F);
printf ("The temprature in celcius will be %f",C);
getch();
}