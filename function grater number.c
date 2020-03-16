#include<stdio.h>
#include<stdlib.h>
int max(int num1, int num2)
{
    int output;
    if(num1>num2)
    {
        output=num1;
    }
    if(num2>num1)
    {
        output=num2;
    }

    return output;
}
int main()
{

    int x,y ,out;
    printf("Enter two input:");
    scanf("%d%d",&x,&y);
    if(x==y){printf("Equal");}
   else{
    out=max(x,y);
    printf("The maximum number is : %d",out);}
    return 0;

}


