#include<stdio.h>
#include<conio.h>

int main(){
	
	/*int i =1;
	label:
		printf("%d ",i++);
		
	if(i<=10)
	goto label;	*/
	
/*	int a[]={1,2,3,5,6,7,8,9,10};
	int i = 0;
	int b=7;
	for (i;i<10;i++){
		if(a[i]!=b){
			printf("element not found on %d index\n",i);
		}
		
		    else (a[i]==b){
		    	printf("element found of %dth position ",i);	
	       		printf("(%d)",a[i]);
				exit(0);
		} 
	} */
	
	
	
	int var = 0;
	
	for (var; var<=256;var++){
		printf("\t%d: %c\t",var,var);
	}
	
	
	return 0;
	
}
