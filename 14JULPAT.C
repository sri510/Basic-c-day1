#include<stdio.h>
#include<conio.h>
void main()
{
int nr,r,c,k=1;
clrscr();
printf("Enter a number of rows: ");
scanf("%d",&nr);
for(r=1;r<=5;r++)
{
for(c=1;c<=r;c++)
{
printf("%3d",r+c-1);
k--;
}
printf("\n");
}
getch();
}

