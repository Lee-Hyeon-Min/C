#include <stdio.h>

void main()
{
	int x, y, result;

	printf("정수입력을 하시오.\n");
	scanf_s("%d %d", &x, &y);

	result = x + y;
	printf(" %d + %d = %d\n",x,y ,result);

	result = x - y;
	printf(" %d - %d = %d\n",x,y, result);

	result = x * y;
	printf(" %d * %d= %d\n",x,y, result);

	result = x / y;
	printf(" %d / %d = %d\n",x,y, result);

	result = x % y;
	printf("%d %% %d=%d\n", x,y,result);
}
