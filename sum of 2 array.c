//write a program to take 2 array from user and print their sum
#include<stdio.h>
int main(){
	int num1[50]={};
	int num2[50]={};
	int num3[50]={};
	int n;
	printf("Enter the size of the array you want\n");
	scanf("%d",&n);
	printf("Enter 1st and 2nd array\n");
	
	for (int i=0;i<n;i++){
		scanf("%d",&num1[i]);
		scanf("%d",&num2[i]);
		num3[i]=num1[i]+num2[i];
	}
	for (int i=0;i<n;i++){
		printf("%d",num3[i]);
	}
	return 0;
}
