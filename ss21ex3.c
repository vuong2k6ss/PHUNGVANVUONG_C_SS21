#include <stdio.h>

int main()
{
	char str[100];
	FILE *fptr;
	printf("nhap them chuoi bat ki: ");
	fgets(str,sizeof(str),stdin);
	fptr = fopen("bt01.txt","a");
	fprintf(fptr,str);
	fclose(fptr);
	return 0;
}

