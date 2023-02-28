#include<stdio.h>
#include<conio.h>
void main()
{
   int a=1;
   clrscr();
   scanf("%d",&a);
   do{
      printf("%d\n",a);
      a++;
   } while(a<=10);

    getch();
}