#include<stdio.h>
int main()
{
    int i,j, n;
    printf("Chack the prime number:");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0&&i!=n)
        {
            printf("%d is not prime\n",n);
            break;
    }
        else if(i==n)
            printf("%d is prime\n",n);
    }
    /* for(i=2;i<=n;i++)
     {
          for(j=2;j<=n;j++)
    {
        if(i%j==0&&i!=j)
        {
            break;
    }
        else if(i==j)
            printf("%d is prime\n",i);
    }
     }*/
}
