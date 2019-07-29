#include<stdio.h>

void reverse(int);

int main()
{
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);

    printf("Reverse of %d is: ",num);
    reverse(num);
    printf("\n\n");

    system ("pause");
    return 0;
}

void reverse(int no)
{
    if(no<0)
    {
        no*=-1;
        printf("-");
    }

    printf("%d",no%10);

    if (no/10==0)
        return;

    reverse(no/10);

}
