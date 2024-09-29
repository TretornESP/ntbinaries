#include <stdio.h>
#include <string.h>

char license_key[] = "Th3_K3y_1s_Th3_S0urc3";

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

void read_license() {
    char license[32];
    printf("\033[0;31m");
    printf("[*] No license key found\n");
    printf("[*] Please enter your license key: ");
    printf("\033[0m");
    gets(license);

    if (strcmp(license, license_key) == 0) {
        printf("\033[0;32m");
        printf("[*] License key is valid\n");
        printf("\033[0m");
    } else {
        printf("\033[0;31m");
        printf("[*] License key is invalid\n");
        printf("\033[0m");
    }
}

int main(int argc, char* argv[]) {
    (void)argc;
    (void)argv;
    prompt();
    read_license();
    return 0;
}