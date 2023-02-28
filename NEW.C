#include<stdio.h>
#include<conio.h>
void main()
{
     int a,b;
     clrscr();
     printf("enter value");
     scanf("%d",&a);
     while(a<=10)
     {
	  printf("\n%d%*%d=%d",a,b,a*b);
	  a++;
     }
       getch();



}