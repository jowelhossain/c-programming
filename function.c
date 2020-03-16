#include<stdio.h>

triangular(int number){
int i, triangular_number=0;

for(i=1;i<=number;i++)
    triangular_number+=i;


printf("%d triangular number is:%d\n",number,triangular_number);

}

int main()
{
    triangular(5);
    triangular(10);
    triangular(15);
}
