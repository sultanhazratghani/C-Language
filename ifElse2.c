#include<stdio.h>

int main(){
	int temp;
	printf("Please type in the temprature\n");
	scanf("%d",&temp);
	if(temp<80){
		if(temp>60){
			printf("Have a nice day");
		}
	}else{
		printf("Sure is hot!");
	}
}
