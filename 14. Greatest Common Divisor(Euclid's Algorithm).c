/*Euclid's Algorithm. Say No1 = 1980, No2=1617 ,
    1980/1617=1        1980 -(1*1617) = 363
    1617/363=4         1617 - (4*363)=165
    363/165=2          363-(2*165)=33
    165/33=5             165-(5*33)=0
    Thus greatest common divisor is 33           */

#include<stdio.h>

int greatestdivisor(int,int);

int main()
{
    int num1,num2,maxdivisor;

    printf("Enter the 2 numbers between which greatest common divisor is to be calculated ex 1980,1617: ");
    scanf("%d,%d",&num1,&num2);

    if (num2>num1)
    {
        int temp=num1;
        num1=num2;
        num2=temp;
    }

    maxdivisor=greatestdivisor(num1,num2);

    printf("\n\n\t\t\t\tThe Greatest Common Divisor of The Numbers %d and %d is: %d\n\n",num1,num2,maxdivisor);

    system ("pause");
    return 0;
}

int greatestdivisor(int no1, int no2)
{
    while((no1%no2)!=0)
    {
        int factor=no1/no2 , temp;

        temp=(no1-(factor*no2));
        no1=no2;
        no2=temp;
    }

    return no2;

}
