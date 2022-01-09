//WAP to take 2 matrix from user (can be of different row and coloumn) and perfrom multiplication
#include<stdio.h>
int main(){
	int m1[10][10],m2[10][10],m3[10][10];
	int a,b,c,d,i,j,k;
	printf("Enter row and coloumn for matrix 1\n");
	scanf("%d %d",&a,&b);
	printf("Enter matrix 1\n");
	for (i=0;i<a;i++){
		for (j=0;j<b;j++){
			scanf("%d",&m1[i][j]);
		}
	}
	printf("Enter row and coloumn for matrix 2\n");
	scanf("%d %d",&c,&d);
	printf("Enter matrix 2\n");
	for (i=0;i<c;i++){
		for (j=0;j<d;j++){
			scanf("%d",&m2[i][j]);
		}
	}
	if (b==c){
		for (i=0;i<a;i++){
			for (j=0;j<d;j++){
				m3[i][j]=0;
				for (k=0;k<d;k++){
					m3[i][j]+=(m1[i][k]*m2[k][j]);
				}
			}
		}
		for (i=0;i<a;i++){
			for (j=0;j<d;j++){
				printf("%d",m3[i][j]);
			}
			printf("\n");
		}
		
	}
	else{
		printf("coloumn of m1 should be equal to row of m2");
	}
	return 0;
}
