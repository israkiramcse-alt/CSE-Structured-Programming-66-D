#include <stdio.h>

int main() {
    char text[50];
    int vowels = 0, i = 0;

    scanf("%s", text);

    while (text[i] != '\0') {
        if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' ||
            text[i] == 'o' || text[i] == 'u' ||
            text[i] == 'A' || text[i] == 'E' || text[i] == 'I' ||
            text[i] == 'O' || text[i] == 'U') {
            vowels++;
        }
        i++;
    }

    printf("Total vowels = %d\n", vowels);

    return 0;
}
