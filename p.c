#include<stdio.h>
#include<conio.h>

int main(){
	
	int i;
	for (i=0; i<=10;i++)
	{	if(i==5)
		break; // breaks the loop only not the program
		printf("%d\n",i);
	}
	printf("learn coding");
	printf("---------------\n");

	
	for (i=0; i<=10;i++)
	{
		if(i==7)
		{
		  printf("\t7 is skipped\n");
	      continue; // skips the 7th time loop body
		}
		printf("%d\n",i);
	}
	printf("=================\n");
	
	
	// using goto label
	printf("loop using goto label\n");
	i=1;
	label:
		printf("%d\n",i);
		i++;
	if(i<=10)
	goto label;		
	
	return 0;
}


