//File handling
#include<stdio.h>
int main(){
	FILE*fp;
	fp =fopen("C:/Users/Documents/Desktop/C programming/Divya.txt","W");
	fprintf(fp,"Hello how are you");
	fclose(fp);
}
