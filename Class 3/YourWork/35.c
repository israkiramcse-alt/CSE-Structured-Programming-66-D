#include <stdio.h>

int main() {
    int size, matrix[10][10], sum = 0;
    scanf("%d", &size);

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
            if (i == j) {
                sum = sum + matrix[i][j];
            }
        }
    }

    printf("Diagonal sum = %d\n", sum);
    return 0;
}
