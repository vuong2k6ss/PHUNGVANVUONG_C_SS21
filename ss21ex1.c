#include <stdio.h>

int main()
{
	char str[100];
	FILE *fptr;
	printf("nhap chuoi bat ki: ");
	fgets(str,sizeof(str),stdin);
	fptr = fopen("bt01.txt","w");
	fprintf(fptr,str);
	fclose(fptr);
	return 0;
}

