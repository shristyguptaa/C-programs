//WAP to print number in reverse order without using arrays
#include<stdio.h>
int main(){
	int num = 123573145;
	int rnum=0,rem;
	while (num != 0){
		rem = num%10;
		rnum = (rnum*10) + rem;
		num /= 10;
	}
	printf("Reversed number is %d",rnum);
	return 0;
}
