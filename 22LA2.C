#include<stdio.h>
#include<conio.h>
int main()
{
int a=4, b, c;
clrscr();
b = --a;
c = a--;
printf("%d %d %d", a, b, c);
getch();
return 0;
}
