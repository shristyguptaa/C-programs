//write a program to add and sub using functions
#include<stdio.h>
void add(){
	int a;
	int b;
	printf("Enter 2 numbers for addition\n");
	scanf("%d %d",&a,&b);
	int c = a + b;
	printf("%d + %d = %d\n",a,b,c);
}
void sub(){
	int a;
	int b;
	printf("Enter 2 numbers for subtraction\n");
	scanf("%d %d",&a,&b);
	int c = a - b;
	printf("%d - %d = %d\n",a,b,c);
}
int main(){
	add();
	sub();
	return 0;
}
