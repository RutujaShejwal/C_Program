#include<stdio.h>
#include<conio.h>

int main()
{
    char ch='\0';

    printf("\nEnter Character To Check =");
    scanf("%c",&ch);

    if(((ch>='A')&&(ch<='Z'))||((ch>='a')&&(ch<='z')))
    {
        printf("\nCharacter is Alphabet\n");
    }
    else if((ch>='0')&&(ch<='9'))
    {
       printf("\nCharacter is Digit\n");
    }

    printf("\nTHANKS!!");

    getch();
    return 0;
}
