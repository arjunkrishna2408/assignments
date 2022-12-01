#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100 // Maximum string size
#include <string.h>

void toggleCase(char * str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i] - 32;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i] + 32;
        }

        i++;
    }
}

int main()
{
    char str[MAX_SIZE];

    FILE *fptr1, *fptr2;
    char filename[100], c;
  
    fptr1 = fopen("readfile.txt", "r");
    if (fptr1 == NULL)
    {
        printf("Cannot open file %s \n", filename);
        exit(0);
    }
  
    printf("Enter the filename to open for writing \n");
    scanf("%s", filename);
  
    fptr2 = fopen(filename, "w");
    if (fptr2 == NULL)
    {
        printf("Cannot open file %s \n", filename);
        exit(0);
    }

    while (fscanf(fptr1, "%s", str) != EOF)
    {
        if(strcmp(str,"manipal")==0 || strcmp(str,"miss")==0 || strcmp(str,"Udupi")==0 || strcmp(str,"names")==0){
            toggleCase(str);
            fputs(str, fptr2);
            printf("%s\n", str);
        }

        /*|| 
            strcmp(tempstring,"miss")==1 || 
            strcmp(tempstring,"Udupi")==1 || 
            strcmp(tempstring,"names")==1*/
        
    }
  
    printf("\nContents copied to %s", filename);
  
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}