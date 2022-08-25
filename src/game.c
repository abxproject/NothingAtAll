

#include "game.h"
#include "chapter1.h"
#include <stdio.h>
#include <stdlib.h>
char input1[20];
void startGame() {
printf("Welcome to the game ");
printf("Do you want to start the game? Type \"y\" to begin");
    scanf(" %20[^\n]",  input1);
    printf("%s", input1);
    if(input1 == "y") {

    }
}

