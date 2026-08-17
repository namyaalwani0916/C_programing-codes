#include <stdio.h>

int main() {
    float grams, kilograms;
    printf("Enter grams: ");
    scanf("%f", &grams);
    kilograms = grams / 1000;
    printf("Kilograms = %.4f\n", kilograms);
    return 0;
}
