#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "chapter1b.h"
#include "terminal.h"
char decidedscene3[4] = "1.0";
int option = 0;
int ending = 1;
char commandInput[20];
void endings() {
    if(ending = 1) {
        "Game OVER: Ending 1";

    }
    printf("Do you want to try again? (y or n)");
    scanf("%20s", commandInput);
    int test = strcmp(commandInput, "y");
    if(test == 0) {
        cmdTerminal();

    }
    else{
        exit(0);
    }
}

void scene4() {
    //printf("Scene 4 success");
   int strtest = strcmp(decidedscene3, "1.0");
   if(strtest == 0) {
       printf("\n That's not good enough for me. WHY ARE YOU HERE");
       printf("\n \n Reply Options: ");
       printf("\n 1: you run away in fear");
       printf("\n 2: Uhh, I... chose to be here");
       scanf("%i", &option);
       switch(option) {
           case 1:
               ;
       }



   }

}

// this is the worst code to ever exist
void init1bother() {
    scene4();
}
void initChapter1b22() {
 strcpy(decidedscene3, "2.2");
    scene4();
}
void initChapter1b21() {
    strcpy(decidedscene3, "2.1");
    scene4();
}
void initChapter1b23(){
    strcpy(decidedscene3, "2.3");
    scene4();
}

