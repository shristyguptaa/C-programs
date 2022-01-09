//WAP to print 10 fibonacci number
#include<stdio.h>
int main(){
	int a = 0,b=1,next;
//	printf("01\n");
	for (int i=0;i<10;i++){
		next = a +b;
		printf("%d\n",next);
		a = b;
		b = next;
	}
	return 0;
}
