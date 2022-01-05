//WAP to use string.h
#include<stdio.h>
#include<string.h>
int main(){
	char n[200] = "Tiya & Divya";
	printf("%s\n",strlwr(n));   //convert string to lower case
	printf("%s\n",strupr(n));   //convert string to upper case
	printf("%s\n",strrev(n));   //reverse the string 
	printf("%d\n",strlen(n));   //count the length of string
	
	return 0;
	}
