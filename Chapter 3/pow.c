    #include <stdio.h>
    #include <math.h>
void main()
{
    int init_money = 24; //원금
    double interest = 0.06;// 이율
    int y = 382;// 투자기간

    double money; //원리금
    money = init_money * pow(1.0 + interest, y);

    printf("%d년후 원리금은 %lf", y, money);
}
