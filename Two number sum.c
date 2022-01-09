//Two number sum
#include<stdio.h>
int main(){
	int sum = 9;
	int arr[6]={10,5,8,3,2,1};
	for (int i=0;i<6;i++){
		for (int j=i+1;j<6;j++){
			if (arr[i]+arr[j]==sum){
				printf("%d %d\n",arr[i],arr[j]);
				break;
			}
		}
	}
	return 0;
}
