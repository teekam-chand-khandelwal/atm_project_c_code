#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pin[4];
    int newpin1[4];
    int newpin2[4];
    int newpin3[4];
    int newpin4[4];
    int newpin5[4];
    int newpin6[4];
    int amount;
    int balance;
    int f;
    balance=0;
    printf("Welcome to SBI ATM!\n");
    printf("Insert your card:\n");
    printf("Enter the your pin:\n");
    scanf("%d",&pin[4]);
    //enter pin
    if((pin[4]==5056)||(pin[4]==newpin1[4]))
    {
        printf("Name:RaVi Sharma\n");
        printf("Balance : 706740Rs\n");
    printf("acc. no:xxxxxxxx2345\n");
    }
    else if((pin[4]==8089)||(pin[4]==newpin2[4]))
        {
        printf("Name: Ranjan Singh\n");
        printf("Balance : 7040Rs\n");
        printf("acc. no:xxxxxxxx5349\n");
    }
    else if((pin[4]==5678)||(pin[4]==newpin3[4]))
    {
        printf("Name:RaVi mishra\n");
        printf("Balance : 100706Rs\n");
        printf("acc. no:xxxxxxxx5349\n");

    }

    else
        {
        printf("Pin is wrong");
        }

        //function requirement
   printf("1 Balance enquary                          2 Mini statement\n");
   printf("3 Transaction                                  4 PIN change\n");
    printf("Choose the appropriate function:\n");
   scanf("%d",&f);


 //balance enquary
  if(f==1)
  {
     if((pin[4]==5056)||(pin[4]==newpin1[4]))
    {

        printf("Balance : 706740Rs\n");

    }
    else if((pin[4]==8089)||(pin[4]==newpin2[4]))
        {

        printf("Balance : 7040Rs\n");

    }
    else if((pin[4]==5678)||(pin[4]==newpin3[4]))
    {

        printf("Balance : 100706Rs\n");


    }
  }
  //mini statement
  else if(f==2)
  {
      if((pin[4]==5056)||(pin[4]==newpin1))
    {

        printf("available balance  : 706740Rs\n");
        printf("debit  : 4000Rs:2-3-2019:Raipur\n");
        printf("debit : 7500Rs:5-6-2019:Rajnagar\n");


    }
    else if((pin[4]==8089)||(pin[4]==newpin2[4]))
        {

        printf(" available Balance : 7040Rs\n");
         printf("credit  : 5000Rs:2-10-2019:Jaipur\n");
        printf("debit : 700Rs:5-6-2019:Ram Nagar\n");

    }
    else if((pin[4]==5678)||(pin[4]==newpin3[4]))
    {

        printf(" available Balance : 100706Rs\n");
         printf("debit  : 4000Rs:2-3-2019:Rampur\n");
        printf("debit : 706740Rs:5-6-2019:Jamnagar\n");


    }
  }
  //transaction
  else if(f==3)
  {
 if((pin[4]==5056)||(pin[4]==newpin1[4]))
    {
        printf("enter amount:\n");
        scanf("%d",&amount);
        printf("collect the amount and slip\n");
        balance=706740-amount;
      if((amount/2000==0)||(amount/200==0)||(amount/100==0)||(amount/500==0))
      {
        if((balance==0)||(balance>0))
            {

              printf("Balance : %d\n",balance);
            }
            else {
                printf("balance is not enough\n");
            }
      }
      else
{
    printf("this range is not available\n");
}

    }
    else if((pin[4]==8089)||(pin[4]==newpin2))
        {
        printf("enter amount:\n");
        scanf("%d",&amount);
        printf("collect the amount and slip\n");
        balance=7040-amount;

if((amount/2000==0)||(amount/200==0)||(amount/100==0)||(amount/500==0))

{
       if((balance==0)||(balance>0))
            {

              printf("Balance : %d\n",balance);
            }
            else {
                printf("balance is not enough\n");
            }
}else
{
    printf("this range is not available\n");
}

    }
    else if((pin[4]==5678)||(pin[4]==newpin3[4]))
    {
         printf("enter amount:\n");
        scanf("%d",&amount);
        printf("collect the amount and slip\n");
        balance=100706-amount;

if((amount/2000==0)||(amount/200==0)||(amount/100==0)||(amount/500==0))
{
       if((balance==0)||(balance>0))
            {

              printf("Balance : %d\n",balance);
            }
            else {
                printf("balance is not enough\n");
            }
}
else
{
    printf("this range is not available\n");
}


    }
  }
else if(f=4)//pin change
{
    if((pin[4]==5056)||(pin[4]==newpin1[4]))
    {
     printf("enter new pin\n");
     scanf("%d",&newpin4[4]);
     newpin1[4]=newpin5[4];

    }
    else if((pin[4]==8089)||(pin[4]==newpin2[4]))
        {

        printf("enter new pin\n");
        scanf("%d",&newpin5[4]);
        newpin2[4]=newpin5[4];
    }
    else if((pin[4]==5678)||(pin[4]==newpin3[4]))
    {

        printf("enter new pin\n");
        scanf("%d",&newpin6[4]);
        newpin3[4]=newpin6[4];

    }

}

else
    {
    printf("not available facility\n");
}

    return 0;
}
