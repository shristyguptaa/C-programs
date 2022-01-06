//WAP to use array as a structure in C 
#include<stdio.h>
struct age{

};

int main(){
	struct age arr[10];
	printf("Enter 10 numbers\n");
	for(int i = 0; i<10; i++){
		scanf("%d",&arr[1]);
	}
	printf("\nOutput\n");
	for (int i = 0; i<10;i++){
		printf("%d\n",arr[i]);
	}
	return 0;
}
