//WAP for continue

#include<stdio.h>
int main(){
	for (int i=1;i<=10;i++){
		if (i==3){
			printf("\nyour number has 3:not allowed\n");
			continue;
		}
		printf("%d ",i);
	}
	return 0;
}
