/* To find out whether a given number is Armstrong Number or not.
   A nth digit Armstrong Number is such that the sum of each digit to its nth power is equal to that number.
   ex 371  a 3 digit number = 3^3 + 7^3 + 1^3
   ex 1634 a 4 digit number = 1^4 + 6^4 + 3^4 + 4^4  */

#include<stdio.h>
#include<string.h>
#include<math.h>
#define MAX 100
int main()
{
    printf("A nth digit Armstrong Number is such that the sum of each digit to its nth power is equal to that number.\nex 371  a 3 digit number = 3^3 + 7^3 + 1^3.\nex 1634 a 4 digit number = 1^4 + 6^4 + 3^4 + 4^4\n\n");
    char again;
    do
    {
        int input;
        printf("\t\t\t\t\t\nWelcome To The ARMSTRONG NUMBER GAME.\nIf You Want To Check for an Armstrong Number Type: 1 and If You Want To Find Out About New Armstrong Numbers Type: 2\n\n\nEnter Your Input: ");
        scanf("%d",&input);

            while(input!=1 && input!=2)
                {
                    printf("\nYou Entered An Invalid Input\nReEnter Input: ");
                    scanf("%d",&input);
                }

            if (input==1)
            {
                int num;
                printf("\nEnter The Number You Want To Check: ");
                scanf("%d",&num);

                int numlen=0;int no=num;
                char tmp[MAX];

                do
                {
                    tmp[numlen]=(no%10)+48;
                    no=no/10;
                    numlen++;
                }while(no!=0);

                tmp[numlen]='\0';

                int sum=0;
                for (int i=0;i<numlen;i++)
                    sum+= (int)(floor(pow((tmp[i]-48),numlen)) + 0.5);

                if (sum==num)
                    printf("\nYour Entered Number %d is an ARMSTRONG NUMBER\n",num);
                else
                    printf("\nYour Entered Number %d is NOT AN Armstrong Number\n",num);
            }

            else if (input==2)
            {
                int end;
                printf("\nEnter till what number do you want the list of armstrong numbers: ");
                scanf("%d",&end);

                for (int i=1;i<=end;i++)
                {
                    int numlen=0;int no=i;
                    char tmp[MAX];

                    do
                    {
                        tmp[numlen]=(no%10)+48;
                        no=no/10;
                        numlen++;
                    }while(no!=0);

                    tmp[numlen]='\0';

                    int sum=0;
                    for (int i=0;i<numlen;i++)
                        sum+= (int)(floor(pow((tmp[i]-48),numlen)) + 0.5);

                    if (sum==i)
                        printf("%d\n",i);
                }
            }



            printf("\n\nDo You Wish To Continue? y for Yes and any other key for No: ");
            fflush(stdin);
            scanf("%c",&again);

            if(again!='y')
                printf("\n\n\t\t\t\t\tThanks for you Patience.\n\t\t\t\t\t    THE.GAME.IS.OVER.\n\n");

    }while(again=='y');
    return 0;
}
