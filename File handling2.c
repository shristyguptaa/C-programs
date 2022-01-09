//File handling2
#include<stdio.h>
int main(){
	FILE*fp;
	char text[200];
	fp = fopen("C:/Users/Documents/Desktop/C programming/Divya.txt","r");
	fscanf(fp,"%s",&text);
	printf("%s/n",text);
	fclose(fp);
}
