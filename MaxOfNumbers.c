#include <stdio.h>

int main() {
    int numbers[10];
    for (int i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    int maxi = numbers[0];
    for (int i = 0; i < 10; i++) {
        if (numbers[i] > maxi) {
            maxi = numbers[i];
        }
    }
    printf("Maximum number is: %d", maxi);
    return 0;
}