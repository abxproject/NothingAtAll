
#include <stdio.h>
#include <string.h>
#include "game.h"
#include <unistd.h>
#include "terminal.h"

int isReset;
void cmdTerminal() {
    char commandInput[20];
    if(isReset == 0) {
        printf("NOTHING AT ALL DEVELOPMENT BUILD\nInput \"help\" for a list of commands\n");
    }
    else if(isReset = 1) {
        sleep(1);
        printf("\n \n Command terminal: \n");
        isReset = 0;
    }
    scanf("%20s", commandInput);

    int isHelp = strcmp(commandInput, "help");
    if(isHelp == 0) {
        printf("\nNOTHING AT ALL COMMANDS \n \n start = Begin the game \n tutorial = will eventually display a tutorial \n");
        printf(" help = gives help about the commands");
        isReset = 1;
        cmdTerminal();
    }

    int isStart = strcmp(commandInput, "start");
    if(isStart == 0) {
        startGame();
    }
    if(isStart != 0 && isHelp != 0) {
        printf("Looks like your input didn't match any of the commands, let's try again \n");
        cmdTerminal();
    }
}