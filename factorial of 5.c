//write a program to find factorial of 5 
#include<stdio.h>
int main(){
	int a = 5;
	int f = 1;
	for (int i =1;i<=a;i++){
		f=f*i;
	}
	printf("%d",f);
	return 0;
}
