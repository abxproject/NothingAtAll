#include "endings.h"
#include <stdio.h>
#include "terminal.h"
#include <string.h>
#include <unistd.h>
#include "chapter1.h"
void endings(int ending) {
    char commandInput[20];
    if(ending == 1) {
        printf("Game OVER: Ending 1\n");

    }
    printf("Do you want to try again? (y or n)");
    scanf("%20s", commandInput);
    int test = strcmp(commandInput, "y");
    if(test == 0) {
        initChapter1();

    }
    else{
        exit(0);
    }
}