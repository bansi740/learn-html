#include<stdio.h>
#include<conio.h>
void main()
{    clrscr();
     int a=10,b=20,c;
     c=b;
     b=a;
     a=c;
     printf("A : %d",a);
     printf("\nB : %d",b);
     getch();
}