#include <stdio.h>

void main()
{
    int n;
    printf("input:"); scanf_s("%d", &n);

    if (n % 2 == 0)
    {
        printf("결과는짝수입니다\n");
    }
    else {
        printf("결과는홀수입니다");
    }
}

