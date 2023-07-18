#include<stdio.h>
#include<conio.h>
void main()
{
int a=10, b;
clrscr();
b = a++ + ++a;
printf("%d %d %d %d", b, a++, a, ++a);
getch();
}

