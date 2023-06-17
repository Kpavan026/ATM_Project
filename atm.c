#include <stdio.h>

int main()
{int i,j,n_pin,t,rating;
long int amount=100000,pin_num,withdrawl_am,deposit;
int t;
char trans;
printf("      Welcome!\n     ");
printf("Please INSERT your card\n");

printf("please enter your pin number\n");
scanf("%ld",&pin_num);
do{
    printf("********Welcome to BOI ATM*************\n");
    printf("1.CASH WITHDRAWL\n2.BALANCE INQUIRY\3.DEPOSIT\n4.PIN GENERATION\n5.GO BACK\n");
    printf("Please Choose your choice\n");
    scanf("%d",&i);
   switch(i)
   {
    case 1: printf("PLESE CHOOSE BANKING FOR CASH WITHDRAWL\n");
             printf("1.BANKING\n2.SAVINGS\n");
             scanf("%d",&j);
             printf("Please enter the amount to withdrawl");
             scanf("%ld",&withdrawl_am);
            if(withdrawl_am>(amount-1000))
              {printf("INSUFFICIENT BALANCE\n");}
              else{
             amount=amount-withdrawl_am;
             printf("please collect your money\n");
             printf("Enter 1 if you want receipt\n");
             scanf("%d",&k);
             if(k==1)
             {printf("------------------------------------\n");
    printf("             BOI ATM                 \n");
    printf("CARD NUMBER:**** ***** **** **52    \n");
    printf("AMOUNT WITHDRAWLED:%ld \n",withdrawl_am);
    printf("YOUR CURRENT BALANCE:%ld\n",amount);
    printf("       thank you        \n");
    printf("------------------------------------\n");
             }}
             break;
    case 2: printf("YOUR CURRENT BAKANCE IS :%ld\n",amount);
            break;
    case 3: printf("ENTER THE AMOUNT TO DEPOSIT\n");
             scanf("%ld",&deposit);
             amount =amount+deposit;
             printf("Your current balance is %ld",amount);
             break;
    case 4: printf("Enter the pin for your card\n");
            scanf("%d",&n_pin);
            printf("Enter the new pin again for verification\n");
            scanf("%d",&n_pin);
            printf("yor pin was succesfully changed\n");
            break;
    case 5: printf("Thank you for using BOI ATM\n");
            break;
    default: printf("INVALID CHOICE\n");
   }
   printf("DO YOU WANT TO HAVE ANOTHER TRANSACTION?(y/n): \n");
   
   scanf("%c",&trans);
    if(trans=='n'||trans==’N)
       t=1; 
    }while(!t);
    printf("Thank you for using our ATM\n");
    printf("Visit again\n");
printf("please give rating for our atm service from 1 to 10\n");
scanf("%d",&rating);
printf("Thank you for your patience\n");
return 0;
}
