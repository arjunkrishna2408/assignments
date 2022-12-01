#include <stdlib.h>
#include <stdio.h>

int main() {
    char sentence[1000];

    FILE *fileptr;

    fileptr = fopen("writefile.txt", "w");
 
    if (fileptr == NULL) {
        printf("Error!");
        exit(1);
    }
    printf("Enter a sentence and press ENTER KEY to stop input:\n");
    fgets(sentence, sizeof(sentence), stdin);
    fprintf(fileptr, "%s", sentence);
    fclose(fileptr);
    return 0;
}