#include<stdio.h>
#include<conio.h>
void main()
{
int nr,nc,r,c,k=1;
clrscr();
printf("Enter a number of rows & columns: ");
scanf("%d%d",&nr,&nc);
for(r=1;r<=5;r++)
{
for(c=1;c<=r;c++)
{
printf("%d\t",k);
k++;
}
printf("\n");
}
getch();
}