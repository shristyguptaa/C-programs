//Enum 
#include<stdio.h>
#define a 10
#define b 20
enum days{sun,mon,tues=50,wed=60,thru,fri,sat
};    //enum variable name {data}
int main(){
	enum days obj;
	int o= tues+wed;
	printf("%d",o);
	return 0;
}
