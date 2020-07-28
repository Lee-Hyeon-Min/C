#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	FILE* fp = NULL;

	fp = fopen_s("sample.txt", "w");

	if (fp == NULL)
		printf("fail");
	else
		printf("success");

	fclose(fp);
	return 0;
	
}