#include<stdio.h>
show(int n)
{
    if(n<=1){return 1;}
    else{
        printf("%d ",n);
        show(n-1);
        printf("\n%d ",n);
    }
}
int main()
{
    int n=4;
    show(n);
}
