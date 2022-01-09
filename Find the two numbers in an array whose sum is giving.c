//Find the two numbers in an array whose sum is giving 
#include<stdio.h>
int main(){
	int arr[6]={1,2,3,5,8,10};
	int a = 0;
	int b = 5;
	int sum = 9;
	while(a<b){
		if (arr[a]+arr[b]==sum){
			printf("%d index + %d index = %d",a,b,sum);
			break;
		}
		if (arr[a]+arr[b]>sum){
			b--;
		}
		if (arr[a]+arr[b]<sum){
			a++;
		}
	}
	return 0;
}
