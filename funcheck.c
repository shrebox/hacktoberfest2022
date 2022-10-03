#include<stdio.h>
void sum(int,int);
void sum(int a,int b)
{
    int s=0;
    s=a+b;
    printf("sum = %d\n",s);
}
void main()
{
    int a,b;
    printf("Enter a and b \n");
    scanf("%d%d",&a,&b);
    sum(a,b);
}