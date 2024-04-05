void main ()
{
 int n;
 char a, b, c;
 printf(“Enter the number of disc”);
 scanf(“%d”, &n);
 printf(“Tower of Hanoi of %d disc\n”,n);
 tower(n, ‘a’, ‘b’, ‘c’);
}
void tower(int n, char beg, char aux, char end)
{
 If(n <= 0)
 printf(“\n Illegal Entry”);
 else if(n == 1)
 printf(“\n Move disc from %c”, beg, end);
 else
 {
 tower(n-1, beg, end, aux);
 tower(1, beg, aux, end);
 tower(n-1, aux, beg, end);
 } 
}}
