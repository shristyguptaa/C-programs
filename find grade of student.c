//program to find grade of a student by his percentage

#include<stdio.h>

int main(){
	int percentage = 23;
	if(100>percentage && percentage >=90){
		printf("the percentage of a student is A+");
	}
	else if(90>percentage && percentage >=80){
		printf("the percentage of a student is A");
	}
	else if(80>percentage && percentage >=70){
		printf("the percentage of a student is B+");
	}
	else if(70>percentage && percentage >=60){
		printf("the percentage of a student is B");
	}
	else if(60>percentage && percentage >=50){
		printf("the percentage of a student is C");
	}
	else if(50>percentage && percentage >=0){
		printf("Need improvement");
	}
	return 0;
}
