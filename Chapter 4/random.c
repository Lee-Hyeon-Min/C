
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
int coin;
srand(time(NULL)); 
coin = rand() % 2;
if (coin == 0)
{
printf("앞입니다.\n");
}
else{
printf("뒤입니다");
}

return 0;

}
