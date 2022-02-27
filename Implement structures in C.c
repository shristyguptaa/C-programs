//WAP to implement structures in C
#include<stdio.h>
#include<string.h>
struct students{
	char n[200];
	int rollno;
	float percent;
};

int main(){
	struct students obj;
	strcpy(obj.n,"Tiya");
	obj.rollno = 1045;
	obj.percent = 85;
	printf("Name = %s\nRollno = %d\nPercent = %f\n",obj.n,obj.rollno,obj.percent);
	
	struct students obj1;
	strcpy (obj1.n,"Divya");
	obj1.rollno = 1046;
	obj1.percent = 85;
	printf ("Name = %s\nRollno = %d\nPercent = %f\n",obj1.n,obj1.rollno,obj1.percent);
	
	return 0;
}
