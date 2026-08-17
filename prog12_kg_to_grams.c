#include <stdio.h>

int main() {
    float kilograms, grams;
    printf("Enter kilograms: ");
    scanf("%f", &kilograms);
    grams = kilograms * 1000;
    printf("Grams = %.2f\n", grams);
    return 0;
}
