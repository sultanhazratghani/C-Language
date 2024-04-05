#include<stdio.h>

int main()
{
	
	float years, days;
	printf("please enter your age in years: ");
	scanf("%f",&years);
	days= years * 365;
	printf("your are %.1f days old\n",days);
	
	
	// the scanf function (we can take multiple inputs at one time)
	
	int event;
	char heat;
	float time;
	
	printf("Type Event number, heat letter and time: ");
	scanf("%d %c %f", &event, &heat, &time);
	printf("the winning time in heat %c", heat);
	printf(" of event %d was %.2f.",event, time);
	
	
	return 0;
}
