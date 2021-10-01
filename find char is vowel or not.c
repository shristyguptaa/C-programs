//write a prorgam to find char is vowel or not using switch statement 
#include<stdio.h>
int main(){
	char a;
	printf("Enter a charater\n");
	scanf("%c",&a);
	switch (a){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		printf("you have entered a vowel");
		break;
		default:
			printf("you have entered a consonent");
	}
	return 0;
}
