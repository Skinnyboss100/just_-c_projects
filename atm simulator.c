#include<stdio.h>

//function prototype
void atm(float amt,float debit,float credit,float transfer,char ch);
//main function
int main()
{
    float amt = 300000;
    float debit,credit,transfer;
    char ch;

    printf("User enter d for debit\n c for credit\n b to check the balance and t for transfer\n : ");
    scanf("%c",&ch);

    atm(amt,debit,credit,transfer,ch);
}
//function work
void atm(float amt,float debit,float credit,float transfer,char ch)
{
    switch(ch)
    {
        case 'b':
        printf("Your account balance is : %.2f", amt);
        break;

        case 'd':
        printf("Enter the amount you are about to remove : \n");
        scanf("%f",&debit);
        if (amt >= debit)
        {
            printf("Transaction success....\nYour balance is %.2f",amt - debit);
            break;
        }
        else
        {
            printf("INSUFFICIENT BALANCE!!...");
            break;
        }

        case 'c':
        printf("User enter the amount you are about to put into your account : \n");
        scanf("%f",&credit);
        
        printf("ACCOUNT CREDITED....New balance is : %.2f",amt + credit);
        break;

        case 't':
        printf("User enter the amount you want to transfer to the other user : ");
        scanf("%f",&transfer);
        if (amt > transfer )
        {
            float acctno;
            printf("Enter account number of the receipent :");
            scanf("%f",&acctno);
            
            printf("TRANSFER SUCCESFUL......YOUR NEW ACCOUNT BALANCE IS : %.2f",amt - transfer);
            break;

        }


        default:
        printf("INVALID OPTION WAS ENTERED");
        
    }
}