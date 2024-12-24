#include <stdio.h>

int main()
{
	FILE *fptr;
	fptr = fopen("bt01.txt","r");
	printf("ki tu dau tien: %c ", fgetc(fptr));
	fclose(fptr);
	return 0;
}

