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
                    printf("\nyou are success");
}
