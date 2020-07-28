#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

// who know why this program doesn't work on Visual Studio 2019
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
