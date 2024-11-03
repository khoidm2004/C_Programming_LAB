#include <stdio.h>
#include <string.h>
#define INPUT_MAX 50

void askName(char *fileInput);
void writeFile(char *fileInput, char *fileName);

int main()
{
    char fileName[INPUT_MAX];
    char *pFileName = fileName;

    char fileInput[INPUT_MAX] = "";
    char *pFileInput = fileInput;

    printf("Program starting.\n");
    askName(fileInput);
    writeFile(fileInput, fileName);
    printf("Program ending.\n");
    return 0;
}

void askName(char *fileInput)
{
    char fName[INPUT_MAX];
    char lName[INPUT_MAX];

    printf("Insert first name: ");
    scanf("%s", fName);

    printf("Insert last name: ");
    scanf("%s", lName);

    strcat(fileInput, fName);
    strcat(fileInput, "\n");
    strcat(fileInput, lName);
    strcat(fileInput, "\n");
}

void writeFile(char *fileInput, char *fileName)
{
    FILE *filehandling;
    printf("Insert filename: ");
    scanf("%s", fileName);
    filehandling = fopen(fileName, "w");
    fprintf(filehandling, "%s", fileInput);
    fclose(filehandling);
}