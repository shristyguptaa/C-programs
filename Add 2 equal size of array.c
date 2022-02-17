//write a program to add 2 equal (size) arrays and store in 3rd

#include<stdio.h>

int main(){
	int num1[5]={10,20,30,40,50};
	int num2[5]={20,50,80,90,510};
	int num3[5];
	for (int a=0;a<5;a++){
		num3[a]=num1[a]+num2[a];
	}
	//output
	for(int a=0;a<5;a++){
		printf("%d ",num3[a]);
	}
	return 0;
}
