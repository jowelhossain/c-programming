#include<stdio.h>
int main()
{
    char ch;
    printf("Type your input: ");
    scanf("%c",&ch);
    if((ch>='a'&&ch<'z')||(ch>'A'&&ch<'Z'))
    {
        printf("you type Alphabet");
    }
    else if(ch>'0'&&ch<'9')
        printf("you type number");
    else
        printf("You type special char");
}
