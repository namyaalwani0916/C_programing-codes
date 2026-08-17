#include <stdio.h>

int main() {
    float minutes, hours;
    printf("Enter minutes: ");
    scanf("%f", &minutes);
    hours = minutes / 60;
    printf("Hours = %.2f\n", hours);
    return 0;
}
