#include<stdio.h>
#include<stdlib.h>
#include<string.h>
union set
{
    int x;
    float y;
    char str[10];
};
int main()
{
    union set test;
    test.x = 10;
    test.y = 2.5;
    strcpy(test.str,"hello");
    printf("Test integer: %d \n",test.x);
    printf("Test float: %f \n",test.y);
    printf("Test String:%s\n",test.str);

return 0;
}
