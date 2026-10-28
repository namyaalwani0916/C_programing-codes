#include <stdio.h>

int main()
{
    float bytes, kb, mb, gb;
    
    printf("Enter bytes: ");
    scanf("%f", &bytes);

    kb = bytes / 1024;
    mb = kb / 1024;
    gb = mb / 1024;

    printf("%.2f Bytes is equal to %.4f KB\n", bytes, kb);
    printf("%.2f Bytes is equal to %.4f MB\n", bytes, mb);
    printf("%.2f Bytes is equal to %.4f GB\n", bytes, gb);

    return 0;
}