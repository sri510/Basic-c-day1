#include<stdio.h>
#include<conio.h>
void main()
{
int Physics, Chemistry, Biology, Mathematics, Computer;
float percentage;
getch();
printf("Enter Physics subject marks");
scanf("%d",&Physics);
printf("Enter Chemistry subject marks");
scanf("%d",&Chemistry);
printf("Enter Biology subject marks");
scanf("%d",&Biology);
printf("Enter Mathematics subject marks");
scanf("%d",&Mathematics);
printf("Enter Computer subject marks");
scanf("%d",&Computer);
percentage=(Physics+Chemistry+Biology+Mathematics+Computer)/5;
printf("percentage: %.2f\n",percentage);
if(percentage>100)
{
printf("Invalid marks assigned");
}
else if(percentage>=90 && percentage<=100)
{
printf("Grade: A\n");
}
else if(percentage>=80 && percentage<90)
{
printf("Grade: B\n");
}
else if(percentage>=70 && percentage<80)
{
printf("Grade: C\n");
}
else if(percentage>=60 && percentage<70)
{
printf("Grade: D\n");
}
else if(percentage>=40 && percentage<60)
{
printf("Grade:E\n");
}
else
{
printf("Grade:F");
}
getch();
}














