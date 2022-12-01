#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp = NULL;
	char ch;
	fp = fopen("readfile.txt", "r");
	if(fp==NULL){
		printf("error");
		exit(1);
	}

	int characters, words, lines;

	characters = words = lines = 0;
    while ((ch = fgetc(fp)) != EOF)
    {
        characters++;
        
        if (ch == '\n' || ch == '\0')
            lines++;

        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
            words++;
    }

    if (characters > 0)
    {
        words++;
        lines++;
    }

    printf("Total words      = %d\n", words);
    printf("Total lines      = %d\n", lines);

    fclose(fp);
	return 0;
}