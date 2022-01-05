//WAP to use string.h
#include<stdio.h>
#include<string.h>

int main(){
	char n1[200] = "Tiya & Divya";
	char n2[200] = "tiya & divya";
	
	if (strcmp(n1,n2)==0){
		printf("same string");
	}
	
	else {
		printf("not same");
	}
	return 0;
}
