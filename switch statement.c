//WAP using switch statement
#include<stdio.h>
int main(){
	int a;
	printf("Enter a number\n");
	scanf("%d",&a);
	switch (a){
		case 1:
			printf("you have entered one");
			break;
		case 2:
			printf("you have entered two");
			break;
		case 3:
			printf("you have entered three");
			break;
		case 4:
			printf("you have entered four");
			break;
		case 5:
			printf("you have entered five");
			break;
		case 6:
			printf("you have entered six");
			break;
		case 7:
			printf("you have entered seven");
			break;
		case 8:
			printf("you have entered eight");
			break;
		case 9:
			printf("you have entered nine");
			break;
		case 10:
			printf("you have entered ten");
			break;
		default:
			printf("not 1,2,3,4,5,6,7,8,9,10");
	}
	return 0;
}
