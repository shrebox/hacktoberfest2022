#include<stdio.h>
void DisplayNumbers(int num[2][2]);
int main()
{
    int num[2][2];
    printf("enter 4 numbers\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&num[i][j]);
        }
    }
    displayNumber(num);
    return 0;
}
void DisplayNumber(int num[2][2])
{
    printf("Displaying \n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d\n",num[i][j]);
        }
    }
}