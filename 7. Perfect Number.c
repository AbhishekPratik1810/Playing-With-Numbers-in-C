/* A Perfect Number is one such that the sum of its factors is equal to the number itself.
   ex 1+2+3=6
   ex 1+2+4+7+14=28
   This code lists the perfect numbers in a given limit */

#include <stdio.h>
#define MAX 100
int main()
{
    int lim;
    printf("Enter till what number should the search be conducted: ");
    scanf("%d",&lim);

    int i; int j;
    for (i=1;i<=lim;i++)
    {
        int sum=0; int k=0;
        for(j=1;j<=i/2;j++)
        {
            if (i%j==0 && i!=j)
            {
                sum+=j;
                k++;
            }
        }

        if(i==sum)
            printf("%d\n",i);

    }


    system ("pause");
    return 0;
}
