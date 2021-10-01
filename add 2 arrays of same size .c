//WAP to add 2 arrays of same size

#include<stdio.h>
int main()
{	int num1[5]={10,20,30,40,50};
	int num2[5]={1,2,3,4,5};
	int num3[5];
  
		for(int a=0; a<5; a++)
		num3[a]=num1[a] + num2[a];
		
		for(int a=0; a<5; a++)
		printf("%d ",num3[a]);
	
	return 0;
}
