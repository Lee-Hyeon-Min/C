
#include <stdio.h>

void main()
{
    int temp;
    printf("온도를나타내렴:");
    scanf_s("%d", &temp);
    
    if (temp > 0)
    {
        printf("온도는%d이므로영상입니다\n", temp);
    }
    else
    {
        printf("온도는%d이므로영하입니다.", temp);
    }
    
    
}
