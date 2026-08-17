#include <stdio.h>

int main() {
    float hours, minutes;
    printf("Enter hours: ");
    scanf("%f", &hours);
    minutes = hours * 60;
    printf("Minutes = %.2f\n", minutes);
    return 0;
}
