#include<stdio.h>

void main()
{
    char ch;
    printf("enter a character");
    scanf("%c",&ch);
    if(ch>='0' && ch<='9')
    printf("digit");
    else
    printf("other character");
}