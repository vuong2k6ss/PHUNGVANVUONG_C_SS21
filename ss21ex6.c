#include <stdio.h>

int main() {
    FILE *fptr1, *fptr2;
    char str[100];
    fptr1 = fopen("bt01.txt", "r");
    fptr2 = fopen("bt06.txt", "w");
    while(fgets(str, 100, fptr1)){
        fprintf(fptr2,str);
    }
    fclose(fptr1);
    fclose(fptr2);
    printf("sao chep thanh cong tu bt01.txt sang bt06.txt.\n");
    return 0;
}

