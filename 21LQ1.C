#include<stdio.h>
#include<conio.h>
void main()
{
int i = 3;
int j;
clrscr();
j= sizeof(++i + ++i);
printf("i=%d j=%d",i, j);
getch();
}

