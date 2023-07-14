#include<stdio.h>
#include<conio.h>
void main()
{
int r,c;
clrscr();
for(r=1;r<=4;r++)
{
for(c=5;c>=1;c--)
{
printf("%3d",c);
}
printf("\n");
}
getch();
}