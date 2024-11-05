#include <stdio.h>
#include <string.h>
#define INPUT_MAX 50
#define FILE_CONTENT_MAX 5000

void readFile(char *content, char *fileName);
void printContent(char *content, char *fileName);

int main()
{
    char content[FILE_CONTENT_MAX] = "";
    char fileName[INPUT_MAX];

    printf("Program starting.\nThis program can read a file.\n");
    readFile(content, fileName);
    printContent(content, fileName);
    printf("Program ending.\n");
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
    if (filehandling == NULL)
    {
        fprintf(stderr, "Error: Could not open file %s\n", fileName);
        return;
    }

    content[0] = '\0';
    while (fgets(line, INPUT_MAX, filehandling))
    {
        size_t remaining_space = FILE_CONTENT_MAX - strlen(content) - 1;
        if (remaining_space < strlen(line))
        {
            fprintf(stderr, "Warning: File content is too large to fit into buffer.\n");
            break;
        }
        strncat(content, line, remaining_space);
    }

    fclose(filehandling);
}

void printContent(char *content, char *fileName)
{
    int db = 34;
    printf("#### START %c%s%c ####\n", db, fileName, db);
    printf("%s", content);
    printf("#### END %c%s%c ####\n", db, fileName, db);
}
