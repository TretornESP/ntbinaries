#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main(int argc, char* argv[]) {
    int a = 1;
    int b = 2;
    int c = sum(a, b);
    printf("sum: %d\n", c);
    return 0;
}

