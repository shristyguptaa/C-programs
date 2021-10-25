//WAP for break 
#include<stdio.h>
int main(){
	for (int i=1; i<=10; i++){
		printf("%d",i);
		if (i==3){
			printf("\nyour number has 3:not allowed\n");
			break;
		}
	}
	return 0;
}
