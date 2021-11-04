//program for eligibility for voting by user input
#include<stdio.h>
int main(){
	int age;
	printf("Enter your age ");
	scanf("%d",&age);
	if(age>=18){
		printf("you are eligible for voting");
	}
	else
	printf("you are NOT eligible for voting");
	return 0;
}
