//program to print elements of array in reverse order
#include<stdio.h>
int main(){
	int num[5]={10,20,30,40,50};
	for(int a = 4; a >= 0; a--){
		printf("%d\n",num[a]);
	}
	return 0;
}
