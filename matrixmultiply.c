#include<stdio.h>
int main()
{
    int x[3][3], y[3][3],i,j,r,total,z[3][3],w[3][3];
    printf("Enter your first matrix:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&x[i][j]);
    }
     printf("Enter your first second matrix:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&y[i][j]);
    }

    printf("Matrix Additon of X & Y :\n");

     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)

        {
            w[i][j]=x[i][j]+y[i][j];
            printf("%d\t",w[i][j]);
        }
        printf("\n");
    }

    printf("Matrix multiplication of X & Y :\n");

     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            total=0;
            for(r=0;r<3;r++)
                total=total+x[i][r]*y[r][j];
            z[i][j]=total;
            printf("%d\t",z[i][j]);
        }
        printf("\n");
    }
}
