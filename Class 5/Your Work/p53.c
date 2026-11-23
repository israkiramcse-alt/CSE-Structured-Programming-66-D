#include <stdio.h>

int main() {
    char username[30];

    printf("Enter username (no spaces): ");
    scanf("%29s", username);

    printf("Welcome, %s!\n", username);

    return 0;
}