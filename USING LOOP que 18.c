#include <stdio.h>

int main() {
    char code;
    int boys = 0, girls = 0;

    printf("Enter sex code for 50 students (M/m for Boy, F/f for Girl):\n");
    for (int i = 1; i <= 50; i++) {
        printf("Student %d: ", i);
        scanf(" %c", &code); // leading space skips any whitespace/newlines

        if (code == 'M' || code == 'm') {
            boys++;
        } else if (code == 'F' || code == 'f') {
            girls++;
        } else {
            printf("Invalid code entered. Skipping.\n");
        }
    }

    printf("\nTotal Boys: %d\n", boys);
    printf("Total Girls: %d\n", girls);

    return 0;
}