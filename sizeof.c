#include<stdio.h>
int main()
{
    char number1[10];
    short int number2[10];
    float number3[10];
    double number4[10];

    printf("size of the Character number 10 element: %d byte\n", sizeof(number1));
    printf("size of the integer number 10 element: %d byte\n", sizeof(number2));
   printf("size of the float number 10 element: %d byte\n", sizeof(number3));
   printf("size of the double number 10 element: %d byte", sizeof(number4));
}
//every float take 4 byte for every element
