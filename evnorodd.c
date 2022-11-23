#include<stdio.h>

int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("the number  %d is even\n",num);

    }else 
    {
        printf("ther number %d is odd\n",num);
    }
}