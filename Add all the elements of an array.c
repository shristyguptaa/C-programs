//WAP to add all the elements of an array 

#include<stdio.h>
int main()
{	int num[5]={1,2,3,4,5};
	int sum;
	for(int a=0; a<5; a++)
		sum+=num[a];
		printf("%d\n",sum);
	return 0;
}	
