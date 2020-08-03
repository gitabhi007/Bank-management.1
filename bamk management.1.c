#include<stdio.h>
void Account();
void deposit();
void withdraw();
void balance();
void Transactions();
void Loan();
void menu();
void login();
int bal = 5000,b,a,c,draw = 0,amount,ra,am,lo,ac,taka;
int usID,upass,ucpass,usid,pass;
int main()
{
    system("color 1F");
    login();
    return 0;
}

void login()
{
    system("color 1F");
    printf("\n**********************************\n");

    printf("\nWelcome To Bank Management System\n");

    printf("\n**********************************\n");

    printf("\n\nLog in screen\n");
    printf("\n1.Press 1 for Login");
    printf("\n2.Press 2 for Create New Account");
    printf("\n\nEnter Your Choice: ");
    scanf("%d",&c);
    if(c==1)
    {
        printf("\nEnter User ID: ");
        scanf("%d",&usid);
        printf("\nEnter Password: ");
        scanf("%d",&pass);

        if(usid==01 && pass==123)
        {
            system("cls");
            printf("\nYou have logged in successfully.");
            printf("\n**********************************");
            printf("\nWELCOME, Bank Management System.");
            printf("\n**********************************");
            menu();
        }
        else if(usid==02 && pass==987)
        {

            system("cls");
            printf("\nYou have logged in successfully.");
            printf("\n**********************************\n");
            printf("\nWELCOME, Bank Management System.");
            printf("\n**********************************\n");
            menu();
        }
        else if(usid==usID && pass==upass)
        {
            system("cls");
            printf("\nYou have logged in successfully.");
            printf("\n**********************************");
            printf("\nWELCOME, Bank Management System.");
            printf("\n**********************************");
            menu();
        }
        else
        {
            system("cls");
            printf("\nWrong Password or User ID.\n");
            login();
        }
    }
    else if(c==2)
    {
        Account();
    }
}

void Account()
{
    system("cls");
    printf("\n**********************************");
    printf("\nWelcome Our Bank Management System.\n");
    printf("\n**********************************");
    printf("\nPlease Register Now\n");
    printf("\n\nPlease Enter User ID: ");
    scanf("%d",&usID);
    printf("\nPlease Enter Password: ");
    scanf("%d",&upass);
    printf("\nPlease Enter Confirm Password: ");
    scanf("%d",&ucpass);
    printf("\nYou have registered successfully.");
    printf("\n**********************************");
    printf("\nWELCOME, Bank Management System.");
    printf("\n**********************************");
    printf("\n\n     \tYour User ID is: %d\n",usID);
    printf("     \tYour Password is: %d\n",upass);
    printf("\nNow You can Login.\n");
    login();
}

void menu()
{
    system("color 1F");
    int ch;
    printf("\n**********************************");
    printf("\n1.press 1 for Transactions");
    printf("\n2.press 2 for Deposit");
    printf("\n3.press 3 for Withdraw");
    printf("\n4.press 4 for Check Balance");
    printf("\n5.press 5 for Loan");
    printf("\nEnter your choice : ");

    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        Transactions();
        break;
    case 2:
        deposit();
        break;
    case 3:
        withdraw();
        break;
    case 4:
        balance();
        break;
    case 5:
        Loan();
        break;
    default:
        printf("choice a valid option !!");
    }
}

void  Transactions()
{
    system("cls");
    printf("\n***************************************");
    printf("\n your current balance is : %d\n",bal);
    printf("\n**************************************");
    printf("\nEnter the Receiver Account Number :");
    scanf("%d",&ra);
    printf("\nEnter Amount :");
    scanf("%d",&am);
    printf("\n***************************************");
    printf("..........Transactions successful..........");
    printf("\n\n Now your current balance is : %d\n",bal-am);
    printf("\n*******************************************");
    printf("\nPress 0 to go Main Menu: ");
    scanf("%d",&a);
    if(a==0)
    {
        system("cls");
        menu();
    }
    else
    {
        printf("\nInvalid Choice. Try again");
        printf("Press 0 to go Main Menu: ");
        scanf("%d",&a);
        if(a==0)
        {
            system("cls");
            menu();
        }
    }
}

void deposit()
{
    system("cls");
    printf("\n*******************************************");
    printf("\nyour current balance is : %d\n",bal);
    printf("\n*******************************************");
    printf("\nEnter the amount:");
    scanf("%d",&amount);
    bal = amount + bal;
    printf("\n*******************************************");
    printf("\nYour current balance is :%d",bal);
    printf("\n*******************************************");
    printf("\nPress 0 to go Main Menu: ");
    scanf("%d",&a);
    if(a==0)
    {
        system("cls");
        menu();
    }
    else
    {
        printf("\nInvalid Choice. Try again");
        printf("Press 0 to go Main Menu: ");
        scanf("%d",&a);
        if(a==0)
        {
            system("cls");
            menu();
        }
    }
}

void withdraw()

{
    printf("\n***************************************");
    printf("\n your current balance is : %d\n",bal);
    printf("\n**************************************");
    printf("\nEnter the withdraw amount :");
    scanf("%d",&draw);
    if(bal<draw)
    {
        printf("your don't have sufficient balance\n");

    }
    else
    {
        bal = bal-draw;

    }

    printf("\n***************************************");
    printf("\nyour current balance is : %d",bal);
    printf("\n***************************************");
    printf("\nPress 0 to go Main Menu: ");
    scanf("%d",&a);
    if(a==0)
    {
        system("cls");
        menu();
    }
    else
    {
        printf("\nInvalid Choice. Try again");
        printf("Press 0 to go Main Menu: ");
        scanf("%d",&a);
        if(a==0)
        {
            system("cls");
            menu();
        }
    }
}

void balance()

{
    printf("\n***************************************");
    printf("\nyour current balance is :%d",bal);
    printf("\n***************************************");
    printf("\nPress 0 to go Main Menu: ");
    scanf("%d",&a);
    if(a==0)
    {
        system("cls");
        menu();
    }
    else
    {
        printf("\nInvalid Choice. Try again");
        printf("Press 0 to go Main Menu: ");
        scanf("%d",&a);
        if(a==0)
        {
            system("cls");
            menu();
        }
    }
}
void Loan()
{
    printf("\n***************************************");
    printf("\nChoice what loan you pay:\n");
    printf("\n***************************************\n");
    printf("1.House Loan.\n");
    printf("2.Car Loan.\n");
    printf("3.Education Loan.\n");
    printf("4.Personal Loan.\n");
    printf("5.Industrial Loan.\n");
    printf("6.Business Loan.\n");
    printf("7.Land Loan.\n");
    printf("Enter your choice: ");
    scanf("%d",&lo);
    printf("Enter Account Number: \n");
    scanf("%d",&ac);
    printf("Enter Amount: \n");
    scanf("%d",&taka);
    printf("\nLoan Give completed.");
    printf("\n***************************************");
    printf("\nNow your current balance is :%d",bal+taka);
    printf("\nPress 0 to go Main Menu: ");
    scanf("%d",&a);
    if(a==0)
    {
        system("cls");
        menu();
    }
    else
    {
        printf("\nInvalid Choice. Try again");
        printf("Press 0 to go Main Menu: ");
        scanf("%d",&a);
        if(a==0)
        {
            system("cls");
            menu();
        }
    }
}