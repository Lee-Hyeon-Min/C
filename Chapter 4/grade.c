#include <stdio.h>

void main()
{
int score;
char grade;

printf("점수는");
scanf_s("%d", &score);

if(score >= 90)
{
grade = 'a'
}
else if(score >= 80)
{
grade = 'b'
}
else if(score >= 70)
{
grade = 'c'
}
else if(score >= 60)
{
grade = 'd'
}
else 
{
grade = 'f'
}
printf("학점은%c 입니다", grade);
}
