#include <stdio.h>

int main() {
    float dollars, rupees;
    printf("Enter dollars: ");
    scanf("%f", &dollars);
    rupees = dollars * 48;
    printf("Rupees = %.2f\n", rupees);
    return 0;
}
