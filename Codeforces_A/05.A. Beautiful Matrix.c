#include<stdio.h>
int main()
{

    int n[5][5],i,j;

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d",&n[i][j]);

        }

    }


    int flag=0,row,col;

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(n[i][j]==1)
            {
                flag=1;
                row=i+1;
                col=j+1;
            }
        }
    }

    int a= abs(row-3) + abs(col-3);
    printf("%d\n",a);

    return 0;
}
