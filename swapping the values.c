//write a program to swap the value of a and b by pointers
#include<stdio.h>

int main(){
	int a = 5,b = 3,c = 0;
	int *p,*q,*r;
	p = &a,q = &b,r = &c;
	*r = *p,*p = *q,*q = *r;{
	printf("%d,%d",a,b);
	}
	return 0;
}
