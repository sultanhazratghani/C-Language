// prototype approach 
#include<stdio.h>
#include<conio.h>

void func(int);

int main(){
	int actarg = 1234;
	func(actarg);
	return 0;
}
void func(int formarg){
	printf("Argument is %d", formarg);
}

/*
func(formarg)
int formarg;
{
	printf("Argument is %d",formarg);
}
main(){
	int actarg = 1234;
	func(actarg);
}
*/
