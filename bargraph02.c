#include<stdio.h>
#include<conio.h>

void bar(int);

void main (){
	
	int inscore =1;
	int name;
	
	while(inscore!=0){
		printf("Enter player name and player score \n");
		scanf("%d",&name);
		scanf("%d",&inscore);
		printf("%s",name);
		bar(inscore);
	}
	
	
	getch();
	
}

void bar(int score){
	int i;
	
	for( i=0;i<=score;i++){
		printf("\xcd");
	
	}printf("\n");
	
}
