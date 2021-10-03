#include <stdio.h>
int main()
{
//Display all the odd numbers between 1 to 100.
int i,count=0;
for(i=1;i<=100;i=i+2)
{   count=count+1;
    printf(" %d %d\n",i,count);

}
printf("count=%d",count);
}
