//performing all the arthematic operations 

#include<stdio.h>

int main(){
	int a = 7;
	int b = 2;
	int add = a+b;
	int sub = a-b;
	int mul = a*b;
	int mod = a%b;
	printf("addition of %d and %d = %d\n",a,b,add);
	printf("subtraction of %d and %d = %d\n",a,b,sub);
	printf("multiplication of %d and %d = %d\n",a,b,mul);
	printf("modulus of %d and %d = %d\n",a,b,mod);
	return 0;
}
