#include <stdio.h>
#define MAX_LENGTH 50 
#include <stdlib.h>
#include <string.h>

void compare_files(char file1[], char file2[]){
	FILE *f1 = fopen(file1, "r");
	FILE *f2 = fopen(file2, "r");
	FILE *f3 = fopen("file3", "w");

	char word1[MAX_LENGTH], word2[MAX_LENGTH];

	if(f1==NULL || f2==NULL){
		printf("files does not exist\n");
		exit(1);
	}

	while(!feof(f1)){
		fscanf(f1, "%s", word1);
		while(!feof(f2)){
			fscanf(f2, "%s", word2);

			if((strcmp(word1, word2))==0){
				fputs(word2, f3);
			}
		}
		rewind(f2);
	}

	fclose(f1);
	fclose(f2);
}

int main(){
	compare_files("file1.txt", "file2.txt");
	return 0;
}