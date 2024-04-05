#include<stdio.h>

int main (){
	int a[3][3];
	int i,j;
	
	
	printf("Enter matrix values for 3X3\n");
	for (i=0;i<3;i++){
		
		for(j=0;j<3;j++){
			
			scanf("\n%d",&a[i][j]);
		}
	}
	printf("Your matrix is\n");
	for(i=0;i<3;i++){
		printf("|");
		for(j=0;j<3;j++){
			
			printf("%2d ",a[i][j]);
			
		}
		printf("|");
		
		printf("\n");

	}
	return 0;
	
}

