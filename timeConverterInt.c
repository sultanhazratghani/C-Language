#include<stdio.h>
#include<conio.h>
int main(){
	int getmin();
	
	int time1, time2;
	
	printf("Enter first time. Time format should be 3:22\n");
	time1=getmin();
	printf("\nEnter second (later) time\n");
	time2=getmin();
	
	if(time2<time1){
		printf("Invalid time, later time cannot be less");
	}else{
		printf("\nThe difference between two time is %d minute",time2-time1);
	
	}
	
}
int getmin(){
	
	int hour, minute;
	scanf("%d:%d",&hour,&minute);
	return(hour*60+minute);
}
