#include<stdio.h>

void main()
{
    char cha;
    printf(" please enter the character you want to check: \n");
    scanf("%c", &cha);

    if ((cha>='A' && cha<='Z') || (cha>='a' && cha<='z'))
        printf("the character %c is  alphabet ", cha);
    else
        printf("the character %c is not alphabet", cha);
}
