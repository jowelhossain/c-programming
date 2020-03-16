#include<stdio.h>
int main()
{
    char cal;
    double x,y;
    printf("Enter your operator:");
    scanf("%c",&cal);
    printf("Enter your input x & y :");
            scanf("%lf %lf",&x,&y);

    switch(cal)
    {
  case'+' :printf("The Answer is: %.0lf\n",x+y);
  break;
  case'-' :printf("The Answer is: %.0lf\n",x-y);
  break;
  case'*' :printf("The Answer is: %.2lf\n",x*y);
  break;
  case'/' :printf("The Answer is: %.2lf\n",x/y);
  break;

  default: printf("Math error");
  break;


    }
}
