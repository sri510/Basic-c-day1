#include<stdio.h>
#include<conio.h>
void main()
{
int nr,nc,r,c,k=1;
clrscr();
printf("Enter the no. of Rows & Columns: ");
scanf("%d%d",&nr,&nc);
//for(r=1;r<=4;r++)
for(r=1;r<=nr;r++)
{
//for(c=1;c<=5;c++)
for(c=1;c<=nc;c++)
{
printf("%3d",k);
k++;

}
printf("\n");
}
getch();
}