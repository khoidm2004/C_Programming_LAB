#include <stdio.h>
#include <string.h>
#define INPUT_MAX 50
#define FILE_CONTENT_MAX 5000

void readFile(char *content, char *fileName);
void printContent(char *content, char *fileName);

int main()
{
    char content[FILE_CONTENT_MAX] = "";
    char *pContent = content;

    char fileName[INPUT_MAX];
    char *pFileName = fileName;

    printf("Program starting\nThis program can read a file.\n");
    readFile(content, fileName);
    printContent(content, fileName);
    printf("Program ending\n");
    return 0;
}

void readFile(char *content, char *fileName)
{
    char line[INPUT_MAX];
    FILE *filehandling;

    printf("Insert filename: ");
    fgets(fileName, INPUT_MAX, stdin);
    fileName[strcspn(fileName, "\n")] = '\0';

    filehandling = fopen(fileName, "r");
    content[0] = '\0';
    while (fgets(line, INPUT_MAX, filehandling))
    {
        strcat(content, line);
    };
    fclose(filehandling);
}

void printContent(char *content, char *fileName)
{
    int db = 34;
    printf("#### START %c%s%c ####\n", db, fileName, db);
    printf("%s", content);
    printf("\n#### END %c%s%c ####\n", db, fileName, db);
}