//write a program to find largest number and take user input

#include<stdio.h>

int main(){
	int a,b,c;
	printf("Enter any three numbers\n");
	scanf("%d %d %d",&a,&b,&c);
	if (a>b){
		if (a>c)
		printf("%d is larger than %d and %d",a,b,c);
	}
	else if (b>a){
		if (b<c)
		printf("%d is larger than %d and %d",b,a,c);
	}
	else 
	printf("%d is larger than %d and %d",c,a,b);
	return 0;
}
