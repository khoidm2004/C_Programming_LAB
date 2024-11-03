#include <stdio.h>
#include <string.h>

void askName(char *pName);
void greetUser(const char *pName);

int main(){
    char pName[50];
    printf("Program starting.\n");
    askName(pName);
    greetUser(pName);
    printf("Program ending.\n");
    return 0;
}

void askName(char *pName){
    printf("Insert name: ");
    scanf("%s",pName);
}

void greetUser(const char *pName){
    printf("Hello %s!\n",pName);
}

