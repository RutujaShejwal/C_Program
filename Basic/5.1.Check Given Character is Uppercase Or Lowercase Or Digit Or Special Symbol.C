#include<stdio.h>
#include<conio.h>

int main()
{
    char ch='\0';

    printf("\nEnter Character To Check =");
    scanf("%c",&ch);

    if((ch>='A')&&(ch<='Z'))
    {
        printf("\nCharacter is Uppercase Letter.");
    }
    else if((ch>='a')&&(ch<='z'))
    {
        printf("\nCharacter is Lowercase Letter.");
    }
    else if((ch>='0')&&(ch<='9'))
    {
       printf("\nCharacter is Digit.");
    }
    else
    {
        printf("\nCharacter is Special Symbol.");
    }

    getch();
    return 0;
}
