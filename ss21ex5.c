#include <stdio.h>

int main(){
    FILE *fptr;
    char str[100];
    int n;
    printf("nhap so dong: ");
    scanf("%d", &n);
    fflush(stdin);  
    fptr = fopen("bt05.txt", "w");
    for(int i=0;i<n;i++){
        printf("nhap dong %d: ",i+1);
        fgets(str, sizeof(str), stdin);  
        fprintf(fptr, str);  
    }
    fclose(fptr);
    fptr = fopen("bt05.txt", "r");
    printf("noi dung trong file bt05.txt:\n");
    for(int i=0;i<n;i++){
		fgets(str,100,fptr);
		printf("%s", str);
    }
    fclose(fptr);
    return 0;
}

