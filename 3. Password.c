//NOTE THE CHARACTER COMPARISON METHOD. ALSO NOTE THE DO-WHILE SYNTAX.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
int main()
{
   char pswd[MAX];
   char confpswd[MAX];

   printf("Enter Password: ");
   scanf("%s",pswd);
   int flagno; int flagcap;

   do
   {
        int len=strlen(pswd);
        int i;int j;
        flagcap=0;flagno=0;                                            //DONT WRITE int flagcap=0 as this makes it a different variable in the do while scope
        char check;

        for (i=0;i<len;i++)
            {
                check=pswd[i];

                if (flagno==0)
                {
                    if ( '0'<=check && check<='9')
                        flagno=1;
                }

                if (flagcap==0)
                {
                    if ('A'<=check && check<='Z')
                        flagcap=1;
                }
            }

        if (flagno==0 && flagcap==1)
        {
            printf("you must have a NUMBER in your password\n");
            printf("\nRe Enter Password: ");
            scanf("%s",pswd);
        }
        if (flagno==1 && flagcap==0)
        {
            printf("you must have a CAPITAL LETTER in your password\n");
            printf("\nRe Enter Password: ");
            scanf("%s",pswd);
        }

        if (flagno==0 && flagcap==0)
        {
            printf("you must have a CAPITAL LETTER and A NUMBER in your password\n");
            printf("\nRe Enter Password: ");
            scanf("%s",pswd);
        }

   }while(flagcap==0 || flagno==0);                                                  // JAB TAK YE CONDITION MET HOTA HAI, TAB TAK LOOP CHALEGA


    int flagconf;
    do
    {
        flagconf=1;

        printf("\n\nCurrent Password: ");
        for (int i=0; i<strlen(pswd);i++)
            printf("*");
        printf("\n");

        printf("Confirm Password: ");
        scanf("%s",confpswd);

        if (strlen(confpswd)!=strlen(pswd))
            flagconf=1;

        else
        {
            flagconf=strcmp(pswd,confpswd);
        }

        if (flagconf!=0)
            printf("\nOOPS WRONG PASSWORD ENTERED.PLEASE ENTER AGAIN");

        else
        {
            printf("\nThank you for your time. Your Password has been stored successfully!!!\n");
            system("pause");
        }
    }while(flagconf!=0);                                                             //JAB TAK YE CONDITION MET HOTA HAI, TAB TAK LOOP CHALEGA

    system ("pause");
    return 0;
}
