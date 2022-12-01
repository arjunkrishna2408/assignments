#include <stdio.h>
#define MAX_LENGTH 1000
#include<string.h>

typedef struct file_name{
    char name[25];
}file_name;

void printFile(char source[25], int i){
    FILE *f1 = fopen(source, "r");
    int first_line=0;

    char line[MAX_LENGTH];

    while(!feof(f1)){
        fgets(line, MAX_LENGTH, f1);
        if(first_line == 0){
            printf("TITLE: %s\n", line);
            first_line = 1;
        }
        else{
            printf("%s\n", line);
        }
    }
    printf("\nPAGE NO: %d\n", i);
    printf("******************************************************************************\n\n");
    fclose(f1);
}

int main(){
    printf("Enter the total number of files to be printed:\n");
    int total, i;
    scanf("%d", &total);
    file_name name[total];
    char line[25];
    printf("\nEnter the name of the files:\n");
    for(i=0; i<total; i++){
        scanf("%s", line);
        strcpy(name[i].name, line); 
    }

    printf("The contents of the files are:\n\n");
    for(i=0; i<total; i++){
        printFile(name[i].name, i+1);
    }
}