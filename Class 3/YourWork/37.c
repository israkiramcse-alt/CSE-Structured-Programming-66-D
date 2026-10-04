#include <stdio.h>

int main() {
    char text[50];
    int len = 0;

    scanf("%s", text);

    while (text[len] != '\0') {
        len++;
    }

    printf("Length of string = %d\n", len);

    return 0;

    
}
