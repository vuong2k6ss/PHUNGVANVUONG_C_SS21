#include <stdio.h>

struct SinhVien{
    char id[10];
	char name[100];
    int age;
};

int main(){
    int n;
    printf("nhap so luong sinh vien: ");
    scanf("%d", &n);
    struct SinhVien sv[n];
    for(int i = 0; i < n; i++){
        printf("\nnhap thong tin cho sinh vien %d:\n",i+1);
        printf("id: ");
		scanf("%s", sv[i].id);
        fflush(stdin);
        printf("ten: ");
		fgets(sv[i].name, 100, stdin);
        sv[i].name[strcspn(sv[i].name, "\n")] = '\0';
        printf("tuoi: "); 
		scanf("%d", &sv[i].age);
    }
    FILE *fptr = fopen("students.txt", "w");
    for(int i = 0; i < n; i++){
        fprintf(fptr, "%s %s %d\n", sv[i].id, sv[i].name, sv[i].age);
    }
    fclose(fptr);
    return 0;
}

