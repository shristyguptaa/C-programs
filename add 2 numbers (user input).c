//write a program to add 2 numbers
#include<stdio.h>
void add(){
	int a;
	int b;
	scanf("%d %d",&a,&b);
	int c = a + b;
	printf("%d + %d = %d\n",a,b,c);
}
int main(){
	add();
	return 0;
}
