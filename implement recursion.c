//WAP to implement recursion
#include<stdio.h>
int i = 0;
void hello(){
	i += 1;
	if (i == 1){
		hello();
	}
	printf("hello ");
	printf("world ");
}

int main(){
	hello();
	return 0;
}
