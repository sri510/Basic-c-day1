#include<stdio.h>
#include<conio.h>
void main()
{
int a=10, b=11, c=13, d;
clrscr();
d= (a=c, b+=a, c=a+b+c);
printf("%d %d %d %d", d, a, b, c);
getch();
}

