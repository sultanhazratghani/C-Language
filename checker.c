#include<stdio.h>
int main(){
	
	int x,y;
	
	for(y=1;y<19;y++){
		for(x=1;x<19;x++){
			
			if((x+y) % 2 == 0){
				printf("\xDB\xDB");
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}
	


}
