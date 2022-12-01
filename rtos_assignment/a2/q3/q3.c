#include <stdio.h>
#define MAX_LENGTH 1000 
#include <stdlib.h>
#include <string.h>

void compare_files(char file1[], char file2[]){
	FILE *f1 = fopen(file1, "r");
	FILE *f2 = fopen(file2, "r");

	char line1[MAX_LENGTH], line2[MAX_LENGTH];

	if(f1==NULL || f2==NULL){
		printf("files does not exist\n");
		exit(1);
	}

	while(!feof(f1) && !feof(f2)){
		fgets(line1, MAX_LENGTH, f1);
		fgets(line2, MAX_LENGTH, f2);

			if((strcmp(line1, line2))!=0){
				printf("%s",line1);
				printf("%s",line2);
			}
	}
}

int main(){
	compare_files("file1.txt", "file2.txt");
	return 0;
}