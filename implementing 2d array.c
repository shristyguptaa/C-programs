//write a program to implement 2d array
#include<stdio.h>
int main(){
	int a[3][2]={{2,3},{4,5},{5,6}};
	for (int i=0;i<3;i++){
		for (int j=0;j<2;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
