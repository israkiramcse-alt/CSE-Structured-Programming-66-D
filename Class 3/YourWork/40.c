#include <stdio.h>

int main() {
    int n, a[100];
    int largest = 0, second = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        if (a[i] > largest) {
            largest = a[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (a[i] > second && a[i] < largest) {
            second = a[i];
        }
    }

    printf("Second largest = %d\n", second);

    return 0;
}
