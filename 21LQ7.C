#include<stdio.h>
#include<conio.h>
void main()
{
int b=15, c=5, d=8, e=8, a;
clrscr();
a=b>c? c>d? 12:d>e? 13:14:15;
printf("%d",a);
getch();
}