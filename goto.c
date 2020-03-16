//goto first:
#include<stdio.h>
int main()
{
    int a;
    begin:
    printf ("Enter your input:");
    scanf("%d",&a);
    if (a>10)
        goto begin;
        printf("Your answer is:%d",a);
}
/*
#include<stdio.h>
int main()
{
    int x;
    printf ("Enter your input:");
    scanf("%d",&x);
    if (x==1)
        goto address1;
         if (x==2)
        goto address2;
        address1:
            printf("your location is %d",x);
            goto end;
            address2:
                printf("your location is %d",x);
                goto end;
                end:
                    printf("you are success");
}
*/
