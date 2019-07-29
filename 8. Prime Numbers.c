#include<stdio.h>

int main()
{
    int end,flag,j;
    printf("Enter till what no: ");
    scanf("%d",&end);

    for (int i=2;i<=end;i++)
    {
        flag=0;
        for (j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    flag=1;
                    break;
                }
            }

        if(flag==0)
            printf("%d\n",i);

    }


    system ("pause");
    return 0;
}

