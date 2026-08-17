#include <stdio.h>

int main() {
    double bytes, kb, mb, gb;
    printf("Enter bytes: ");
    scanf("%lf", &bytes);
    kb = bytes / 1024.0;
    mb = kb / 1024.0;
    gb = mb / 1024.0;
    printf("KB = %.2lf\n", kb);
    printf("MB = %.4lf\n", mb);
    printf("GB = %.6lf\n", gb);
    return 0;
}
