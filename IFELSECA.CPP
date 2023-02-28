#include<stdio.h>
#include<conio.h>
void main(){
       int a,b;
       clrscr();
       printf("enter value : ");
       scanf("%d",&b);
       printf("enter chosi number : ");
       scanf("%d",&a);
       switch(a)
       {   case 1:
	   if (b%2==0)
	   {
	   printf("even numer");
	   }
	   break;
	    case 2:
	   if (b%2==1)
	   {
	   printf("odd number");
	   }
	   break;
       }
      getch();
}