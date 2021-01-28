#include<stdio.h>
#include<conio.h>

int main()
{
    char ch='\0';

    printf("\nEnter Character To Check =");
    scanf("%c",&ch);                        //Options Can Be Used =>>>>//ch=getche();//ch=getch();//ch=getchar();

    if((ch>='A')&&(ch<='Z'))
    {
        printf("\nCharacter is Uppercase Letter.");
    }
    else if((ch>='a')&&(ch<='z'))
    {
        printf("\nCharacter is Lowercase Letter.");
    }
    else
    {
        printf("\nCharacter is Special Symbol.");
    }

    getch();
    return 0;
}
