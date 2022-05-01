#include <stdio.h>

void main()
{
int usd;
int kwn;
const int EXCHANGE_RATE = 1120

printf("달러화금액을입력하십시오:\n");
scanf_s("%d", &usd);
kwn = EXCHANGE_RATE * usd;
printf("환율은%d 이고한국돈으로%d 입니다.\n", usd, kwn);
}
