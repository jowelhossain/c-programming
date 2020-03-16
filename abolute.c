#include<stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    if(i<0)
    {
        i*=-1;
        printf("%d",i);

    }
    else
        printf("%d",i);
}
