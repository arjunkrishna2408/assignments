#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fp = NULL;
	char ch;
	char arr[255];
	fp = fopen("readfile.txt", "r");
	if(fp == NULL){
		printf("error");
		exit(1);
	}

	int i;
	for(i=0;fscanf(fp,"%c", arr)!=EOF;i++);

	printf("no of char = %d", i);
	fclose(fp);
	return 0;
}