#include <stdio.h>

int main()
{
    FILE *fptr;
    char str[100];
    fptr = fopen("bt01.txt", "r");
    fgets(str,100,fptr);
    printf("dong dau tien: %s", str);
    fclose(fptr);
    return 0;
}

