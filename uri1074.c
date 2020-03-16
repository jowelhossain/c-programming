#include<stdio.h>
int main()
{
    int n;
 printf("Enter your input:");
    scanf("%d",&n);

    if(n<0&&n%2!=0)
    {
        printf("ODD NEGATIVE");
    }
    else if(n==0)
    {
        printf("NULL");
    }
    else if(n>0&&n%2!=0)
    {
        printf("ODD positive");
    }
    else if(n<0&n%2==0)
    {
        printf("EVEN NEGATIVE");
    }
     else if(n>0&&n%2==0)
    {
        printf("Even Positive");
    }
}
