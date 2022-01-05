//WAP to use string.h
#include<stdio.h>
#include<string.h>

int main(){
	char n1[200] = "Tiya & ";
	char n2[200] = "Divya";
	printf("%s",strcat(n1,n2));   //string concatination(join)
	return 0;
}
