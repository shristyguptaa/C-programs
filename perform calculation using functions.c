//WAP to perform calculation using functions
#include<stdio.h>

void add(){
	int a = 2, b = 3;
	int c = a+b;
	printf("%d + %d = %d\n",a,b,c);	
}
void sub(){
	int a = 2,b= 3;
	int c = a-b;
	printf("%d - %d = %d\n",a,b,c);	
}
void mul(){
	int a = 2,b= 3;
	int c = a*b;
	printf("%d * %d = %d\n",a,b,c);	
}
void div(){
	int a = 2,b= 3;
	int c = a/b;
	printf("%d / %d = %d\n",a,b,c);	
}
void mod(){
	int a = 2,b= 3;
	int c = a%b;
	printf("%d mod %d = %d\n",a,b,c);	
}

int main(){
	int p;
	while(1){
		printf("\nWhat you want to perform\n1-->+\n2-->-\n3-->*\n4-->/\n5-->mod\n0-->exit\n");
		scanf("%d",&p);
		if (p==1){
			add();
		}
		else if(p==2){
			sub();
		}
		else if(p==3){
			mul();
		}
		else if(p==4){
			div();
		}
		else if(p==5){
			mod();
		}
		else if(p==0){
			break;
		}
		else
		printf("Enter a valid number");
	}
	return 0;
}
