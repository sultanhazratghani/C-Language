#include<stdio.h>
#include<string.h>
int main(){
	
	
	/*char a[] = "sultan";
	strlen();
	strcpy();
	strcat();
	strcmp();
	strlwr();
	strupr();
	
	gets() //inputs
	puts() // outputs */
	
	
	char str[50],str2[40];
	puts("Enter any String:");
	gets(str);
//	puts(str);
	//puts(strupr(str));
	
	puts("enter another string");
	gets(str2);
//	puts(str2);
	//puts(strrev(str));
	
	
	//printf("/n%d",strlen(str)); //lenght of string

	//strcpy(str2,str);
	//puts(str2);
	
/*	if(strcmp(str,str2)==0){
		puts("both string are Equal");
		printf("/n length of strings %d",str);
	}
	else{
		puts("both string are not Equal");
		printf("\n length of string1 %d",strlen(str));
		printf("\n length of string2 %d",strlen(str2));
	} */
	
	
	strcat(str,str2);
	strcat(str2,str);
	puts(str);
	puts(str2);
	return 0;
}
