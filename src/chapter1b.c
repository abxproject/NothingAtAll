#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "chapter1.h"
#include "chapter1b.h"
#include "func/endings.h"

char decidedscene3[4] = "1.0";
int option1b = 0;




void scene4() {
   int strtest = strcmp(decidedscene3, "1.0");
   if(strtest == 0) {
       printf("\nThat's not good enough for me. WHY ARE YOU HERE");
       printf("\n\nReply Options: ");
       printf("\n1: you run away in fear");
       printf("\n2: Uhh, I... chose to be here\n");
       scanf("%i", &option1b);
       switch(option1b) {
           case 1:

               endings(1);
               break;
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

