#include<stdio.h>

int main()
{
    int num;
    printf("enter a number: ");
    scanf("%d",&num);

    if(num<0)
    {
        printf("the number %d is negative\n",num);
    }else if(num>0)
    {
        printf("thr number %d is positive",num);
    }else{
        printf("the number is nor positive nor negative\n");
    }

}