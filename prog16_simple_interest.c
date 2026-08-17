#include <stdio.h>

int main() {
    float p, r, n, i;
    printf("Enter Principal, Rate of Interest, and Number of Years: ");
    scanf("%f %f %f", &p, &r, &n);
    i = (p * r * n) / 100;
    printf("Simple Interest = %.2f\n", i);
    return 0;
}
