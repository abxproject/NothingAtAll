#include <stdio.h>
#include <unistd.h>
#include "chapter1.h"
#include "chapter1b.h"
#include <string.h>
int choseToAskAgain;
int choseCautiousApproach;
int option = 0;

int scene3() {
   option = 0;

   if(choseCautiousApproach = 1) {
       printf("\nAnyway, what are you doing here?\n");
       printf("\nReply Options:\n");
       printf("1: I'm just here, I guess.\n");
       printf("2: I never thought about it.\n");
       scanf("%i", &option);
       switch(option) {
           case 1:
               init1bother();
               break;
           case 2:
               init1bother();
               break;
       }
   }
   else {
       printf("\n No, it's nothing. I don't know why you keep on harrassing me.");
       printf("\n Or why you are even here in the first place!");
       printf("\nReply Options:\n");
       printf("1: I'm just here, I guess.\n");
       printf("2: I never thought about it.\n");
       printf("3: I'm not trying to be aggressive or anything\n");
       scanf("%i", &option);
       switch(option) {
           case 1:

               initChapter1b21();
               break;
           case 2:

               initChapter1b22();
               break;
           case 3:

               initChapter1b23();
               break;
       }
   }
}

int scene2() {
    option = 0;
    printf("Nothing at all.\n");
    printf("\nReply Options:\n");
    printf("1: Are you sure about that?\n");
    printf("2: Ah, okay (Cautious approach)\n");
    scanf("%i", &option);
    switch(option) {
        case 1:
            scene3();
            break;
        case 2:
            choseCautiousApproach = 1;
            scene3();
            // printf("Successfully completed case2");
        default:
            break;
    }
};
int scene1() {
    option = 0;
    sleep(3);
    printf("Finished loading...\n");
    sleep(0.1);
    printf("\nNothing At All: A Text Adventure by LandarXT\n");
    sleep(2);
    
    printf("\nWelcome to my...\n ");
    sleep(0.2);
    printf("\nReply Options:\n");
    printf("1: Your what?\n");
    printf("2: I'm sorry, can you say that again?\n");
    scanf("%i", &option);
    switch(option) {
        case 1:
            askTheQuestion();
            break;
        case 2:
            choseToAskAgain = 1;
            askTheQuestion();
            break;
        default:
            break;
    }
}

void initChapter1() {
    soItBegins();
}