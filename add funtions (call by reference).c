//write a program to add funtions (call by reference)
#include<stdio.h>
int add ( int a, int b){
	int c = a + b;
	return c;
}
int main(){
	int sum = add(5,2);
	printf("%d",sum);
	return 0;
}
