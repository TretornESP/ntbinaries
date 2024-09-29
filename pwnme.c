#include <stdio.h>
#include <stdlib.h>

void prompt() {
    printf("\033[0;34m");
    printf(" _______ _            _  __             _____      _                 _ \n");
    printf(" |__   __| |          | |/ /            / ____|    | |               | |\n");
    printf("    | |  | |__   ___  | ' / ___ _   _  | (___   ___| |__   ___   ___ | |\n");
    printf("    | |  | '_ \\ / _ \\ |  < / _ \\ | | |  \\___ \\ / __| '_ \\ / _ \\ / _ \\| |\n");
    printf("    | |  | | | |  __/ | . \\  __/ |_| |  ____) | (__| | | | (_) | (_) | |\n");
    printf("    |_|  |_| |_|\\___| |_|\\_\\___|\\__, | |_____/ \\___|_| |_|\\___/ \\___/|_|\n");
    printf("                                 __/ |                                  \n");
    printf("                                |___/                                   \n");
    printf("\033[0m");
}

void very_insecure() {
    printf("\033[0;31m");
    printf("[*] You are now entering a restricted area!!!\n");
    system("/bin/sh");
}

void pwnable() {
    char name[256];
    printf("\033[0;31m");
    printf("[*] First of all, tell me who are you? > ");
    printf("\033[0m");
    gets(name);
    
    printf("Hello ");
    printf(name);
    printf("\n");
    return;
}

int main(int argc, char* argv[]) {
    (void)argc;
    (void)argv;
    prompt();
    pwnable();
    //very_insecure(); // Never uncomment this line or else you will get pwned
    return 0;
}