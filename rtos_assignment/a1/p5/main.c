#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp = NULL;
    FILE *fpeven=NULL, *fpodd=NULL;
	char ch[100];
    char word[100];
	fp = fopen("input.txt", "r");
    fpeven = fopen("even.txt", "w");
    fpodd = fopen("odd.txt", "w");


	if(fp==NULL){
		printf("error");
		exit(1);
	}

    int i = 1;
    while (fscanf(fp,"%s", word) != EOF)
    {
        if(i%2==0){
            fprintf(fpeven, "%s ", word);
            // printf("%d",i);
        } else {
            fprintf(fpodd, "%s ", word);
            // printf("%d",i);
        }
        i++;
    }
    printf("Succefully separated");


    fclose(fp);
    fclose(fpeven);
    fclose(fpodd);
	return 0;
}