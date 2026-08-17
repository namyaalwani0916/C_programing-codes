#include <stdio.h>

int main() {
    float h, l, area;
    printf("Enter height and base length of triangle: ");
    scanf("%f %f", &h, &l);
    area = (h * l) / 2.0;
    printf("Area = %.2f\n", area);
    return 0;
}
