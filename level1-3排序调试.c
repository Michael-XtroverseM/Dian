#include <stdio.h>
int temp,i,j;
int arrange(int up[][2],int n)
{
    for(i = 0; i < 5; i++)
    {
        for(j = 4; j > i; j--)
        {
            if(up[j][n] > up[j-1][n])
            {
                temp = up[j][n];
                up[j][n] = up[j-1][n];
                up[j-1][n] = temp;     
            }
        }
    }
    return 0;
}

int max(int up[][2])
{
    if(up[0][0] >= up[0][1])
    {
        return up[0][0];
    }
    else
    {
        return up[0][1];
    }
    return 0;
}

int main()
{
    int up[5][2]={{1,4},{5,6},{7,3},{3,1},{2,0}};
    int b;
    arrange(up,0);
    arrange(up,1);
    for(i=0;i<5;i++)
    {
        printf("Element[%d][0]=%d\n",i,up[i][0]);
        printf("Element[%d][1]=%d\n",i,up[i][1]);
    }
    
    b = max(up);
    printf("%d",b);


    return 0;
}
