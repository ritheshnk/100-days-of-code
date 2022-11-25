#include<stdio.h>
int main()
{
    int num;
    int sum=0;
    printf("enter a num:\n");
    scanf("%d",&num);

    for(int i=1;i<=num;i++)
    {
        sum=sum+i;
    }
    printf(" sum is %d",sum);
}