#include <stdio.h>

void main()
{
int a, b, c;
    int max;

printf("a:"); scanf_s("%d", &a);
printf("b:"); scanf_s("%d", &b);
printf("c:"); scanf_s("%d", &c);

max = a;
if (b > max)
{
max = b;
}
if (c > max)
{
max = c;
}
printf("max는%d", max);
}
