//write a program to find entered number is prime number or not
#include<stdio.h>
int main(){
	int n;
	printf("Enter a number ");
	scanf("%d",&n);
	
	int i;
	for (i=2;i<n;i++){
		if (n%i==0){
			printf("this number is not a prime number");
			break;
		}
		if (i+1==n){
			printf("this number is a prime number");
		}
	}
	return 0;
}
