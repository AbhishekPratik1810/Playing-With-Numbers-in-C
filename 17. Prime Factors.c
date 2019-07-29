#include<stdio.h>

void primefactor(int);

int main()
{
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);

    printf("Prime Factors are: \n");
    primefactor(num);

    system ("pause");
    return 0;
}

void primefactor(int no)
{
    int fact;

    for(int i=2;i<=no;i++)
    {
        if(no%i==0)
        {
            int flag=0;
            for(int j=2;j<i;j++)
            {
                if(i%j==0)
                    flag=1;
            }

            if (flag==0)
                printf("%d\n",i);
        }
    }
}
