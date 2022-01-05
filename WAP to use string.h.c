//WAP to use string.h
#include<stdio.h>
#include<string.h>
int main(){
	char n1[200] = "Tiya & Divya";
	char n2[200] = "Tanishka";
	strcpy(n2,n1);
	printf("%s",n2);     //copy right value to left
	
	return 0;
}
