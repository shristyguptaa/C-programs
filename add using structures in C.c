//WAP to add using structures in C
#include<stdio.h>

struct students{
	int a;
	int b;
	int c;
};

int main(){
	struct students obj;
	obj.a = 5;
	obj.b = 3;
	obj.c = obj.a + obj.b;
	printf("%d",obj.c);
	
	return 0;
}
