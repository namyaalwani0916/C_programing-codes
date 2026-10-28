#include <stdio.h>

int main() {
    float num;
    int positive = 0, negative = 0, zeros = 0;

    printf("Enter 200 values:\n");
    for (int i = 1; i <= 200; i++) {
        printf("Value %d: ", i);
        scanf("%f", &num);

        if (num > 0) {
            positive++;
        } else if (num < 0) {
            negative++;
        } else {
            zeros++;
        }
    }

    printf("\nPositive count: %d\n", positive);
    printf("Negative count: %d\n", negative);
    printf("Zero count: %d\n", zeros);

    return 0;
}