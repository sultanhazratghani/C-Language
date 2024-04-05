#include<stdio.h>
#include<conio.h>
void tower(int n, char beg, char aux, char end);
int main ( )
{
int n;
char a,b,c;
printf("enter number of discs");
scanf("%d",&n);
printf("Tower of Hanoi of %d discs\n",n);
tower(n,a,b,c);

return 0;
}
void tower(int n, char beg, char aux, char end)
{
if (n<=0)
{
{
  printf("\n illegal entry");
  }
else if (n==1)
{
  printf("move disk from %c to %c",beg, end);
  }
else
 {
 tower(n-1,beg,end,aux);
 tower(1,beg,aux,end);
 tower(n-1,aux,beg,end);
 }
 }




