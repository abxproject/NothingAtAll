#include <stdio.h>
#include <unistd.h>
#include "chapter1.h"
int choseToAskAgain;
int askTheQuestion() {
    printf("Nothing at all.");
};
int soItBegins() {
    int option;
    sleep(3);
    printf("Finished loading...\n");
    sleep(0.1);
    printf("\nNothing At All: A Text Adventure by LandarXT\n");
    sleep(2);
    printf("\nWelcome to my...\n ");
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