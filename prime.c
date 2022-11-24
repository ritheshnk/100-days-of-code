#include<stdio.h>
int main()
{
    int num,temp=0;
    printf("enter a number:\n");
    scanf("%d",&num);

    if(num==0 || num==1)
    {
        temp=1;
    }
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            temp=1;
            break;
        }
    }

    if(temp==0)
    {
        printf("the number %d is prime\n",num);
    }else{
        printf("the number %d is not pirme",num);
    }
}