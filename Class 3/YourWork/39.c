#include <stdio.h>

int main() {
    char text[50];
    int len = 0, palindrome = 1;

    scanf("%s", text);

    while (text[len] != '\0') {
        len++;
    }

    for (int i = 0; i < len / 2; i++) {
        if (text[i] != text[len - 1 - i]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
    
}
