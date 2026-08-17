#include <stdio.h>

int main() {
    float a, b, div;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    if (b != 0) {
        div = a / b;
        printf("Division = %.2f\n", div);
    } else {
        printf("Division by zero error.\n");
    }
    return 0;
}
