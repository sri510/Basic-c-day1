#include<stdio.h>
#include<conio.h>
void main()
{
int a1,a2,a3,a4,a5, avg;
clrscr();
printf("Enter the marks of five subject");
scanf("%d%d%d%d%d", &a1,&a2,&a3,&a4,&a5);
avg=(a1+a2+a3+a4+a5)/5;
printf("%d",avg);
avg > 60 ? printf("pass %d",avg):printf("fail %d",avg);
getch();
}