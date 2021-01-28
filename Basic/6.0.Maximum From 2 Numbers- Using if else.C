//Maximum From 2 Integer-Using if else
#include<Stdio.h>
#include<conio.h>

int main()
{

    int Num1=0,Num2=0;

    printf("\n Enter 2 Integer Numbers=");
    scanf("%d%d",&Num1,&Num2);

    if(Num1>Num2)
    {
      printf("\nNumber %d is Maximum",Num1);
    }

    else
    {
      printf("\nNumber %d is Maximum",Num2);
    }

    printf("\nThanks!!!");

    getch();
    return 0;
}
