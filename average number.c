#include<stdio.h>
#include<stdlib.h>
double ave(int num[] , int len)
{
    int x;
    double total,average;
    for(x=1;x<=len;x++)
    {
        total+=num[x];
    }

   average=total/len;
   return average;
}
int main()
{
    int len,i;
    printf("how many input you need:");
    scanf("%d",&len);
    int num[len];
    printf("Enter your input:");
    for(i=1;i<=len;i++)
    {
        scanf("%d",&num[i]);
    }
    double result;
    result=ave(num,len);
    printf("The average number:%.2f",result);
}
