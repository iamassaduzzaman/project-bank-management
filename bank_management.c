// includes
#include <stdio.h>
#include <stdlib.h>

// customer profile
int pass = 101112;
int userID = 101112;

// customer account info
long int balance = 0, loanAmount = 0, deposit = 0, withdraw = 0, transfer = 0;

// function prototype
int loggedIN();
int createAccount();
int navigate();
int profile();
int takeLoan();
int depositMoney();
int withdrawMoney();
int makeTransaction();
int aboutProject();

// main funciton
int main()
{
  printf("\n----------------Welcome to lost_bank!----------------\n\n");
  printf("\t\t[1] Log in\n");
  printf("\t\t[2] Create new account\n");
  printf("\t\t[3] Exit\n");
  printf("\t\t[4] About Project and Updates\n");

  int choice;
  printf("Your Choice: ");
  scanf("%d", &choice);

  switch (choice)
  {
  // log in
  case 1:
    loggedIN();
    break;

  // create new account
  case 2:
    createAccount();
    break;

    // exit program
  case 3:
    exit(0);
    break;

    // about us
  case 4:
    aboutProject();
    break;
  }

  return 0;
}

// loggedIN funtion defination
int loggedIN()
{
  printf("\n");
  int u1, p1;
  printf("User ID: ");
  scanf("%d", &u1);
  printf("Password: ");
  scanf("%d", &p1);

  if (u1 == userID && p1 == pass)
  {
    printf("\n\t\tWelcome User: %d\n", u1);
    navigate();
  }
  else
  {
    printf("\n\t\tOpps! Wrong credentails.\t\t\n\n");
    printf("\t\t[1] Log in again\n");
    printf("\t\t[2] Home\t\t\n");
    printf("\t\t[3] Exit\t\t\n");

    int choice;
    printf("Your Choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
      loggedIN();
    }
    else if (choice == 2)
    {
      main();
    }
    else
    {
      exit(0);
    }
  }
}

// navigate function defination
int navigate()
{
  printf("\n");
  printf("\t\t[1] Profile\t\t\n");
  printf("\t\t[2] Take Loan\t\t\n");
  printf("\t\t[3] Deposit Money\t\t\n");
  printf("\t\t[4] Withdraw Money\t\t\n");
  printf("\t\t[5] Make Transaction\t\t\n");
  printf("\t\t[6] Log Out\t\t\n");
  printf("\t\t[7] Exit\t\t\n");

  int choice;
  printf("Your Choice: ");
  scanf("%d", &choice);

  switch (choice)
  {
  case 1:
    profile();
    break;

  case 2:
    takeLoan();
    break;

  case 3:
    depositMoney();
    break;

  case 4:
    withdrawMoney();
    break;

  case 5:
    makeTransaction();
    break;

  case 6:
    main();
    break;

  case 7:
    exit(0);
    break;

  default:
    navigate();
    break;
  }
}

// createAccount function defination
int createAccount()
{
  printf("\n\t\tCreating New Account...\n\n");
  int u1, p1;
  printf("Please Choose Your ID: ");
  scanf("%d", &u1);
  printf("Please Choose Password: ");
  scanf("%d", &p1);

  userID = u1;
  pass = p1;

  printf("\nYour account has been created successfuly :)\n\n");

  printf("\t\t[1] Log in\n");
  printf("\t\t[2] Exit\n");

  int choice;
  printf("Your Choice: ");
  scanf("%d", &choice);

  if (choice == 1)
  {
    loggedIN();
  }
  else
  {
    exit(0);
  }
}

// profile function defination
int profile()
{
  printf("\nYour ID: %d\n", userID);
  printf("Your Net Balance: %d\n", balance);
  printf("You owe bank: %d\n", loanAmount);
  printf("Your deposit amount: %d\n", deposit);
  printf("Your withdraw amount: %d\n\n", withdraw);

  printf("\t\t[1] Main Menu\n");
  printf("\t\t[2] Log Out\n");
  printf("\t\t[3] Exit\n");

  int choice;
  printf("Your Choice: ");
  scanf("%d", &choice);

  if (choice == 1)
  {
    navigate();
  }
  else if (choice == 2)
  {
    main();
  }
  else
  {
    exit(0);
  }
}

// takeLoan function defination
int takeLoan()
{
  printf("\nYour Net Balance: %d\n\n", balance);

  printf("How much money you want to take loan: ");
  scanf("%d", &loanAmount);
  printf("\n");

  balance += loanAmount;
  printf("After taking loan, Your Net Balance: %d\n\n", balance);

  printf("\t\t[1] Main Menu\n");
  printf("\t\t[2] Log Out\n");
  printf("\t\t[3] Exit\n");

  int choice;
  printf("Your Choice: ");
  scanf("%d", &choice);

  if (choice == 1)
  {
    navigate();
  }
  else if (choice == 2)
  {
    main();
  }
  else
  {
    exit(0);
  }
}

// depositMoney function defination
int depositMoney()
{
  printf("\nYour Net Balance: %d\n\n", balance);

  printf("How much money you want to deposit: ");
  scanf("%d", &deposit);
  printf("\n");

  balance += deposit;
  printf("After Deposit, Your Net Balance: %d\n\n", balance);

  printf("\t\t[1] Main Menu\n");
  printf("\t\t[2] Log Out\n");
  printf("\t\t[3] Exit\n");

  int choice;
  printf("Your Choice: ");
  scanf("%d", &choice);

  if (choice == 1)
  {
    navigate();
  }
  else if (choice == 2)
  {
    main();
  }
  else
  {
    exit(0);
  }
}

// withdrawMoney function defination
int withdrawMoney()
{
  printf("\nYour Net Balance: %d\n\n", balance);

  printf("How much money you want to Withdraw: ");
  scanf("%d", &withdraw);
  printf("\n");

  balance -= withdraw;
  printf("After withdraw, Your Net Balance: %d\n\n", balance);

  printf("\t\t[1] Main Menu\n");
  printf("\t\t[2] Log Out\n");
  printf("\t\t[3] Exit\n");

  int choice;
  printf("Your Choice: ");
  scanf("%d", &choice);

  if (choice == 1)
  {
    navigate();
  }
  else if (choice == 2)
  {
    main();
  }
  else
  {
    exit(0);
  }
}

// makeTransaction function defination
int makeTransaction()
{
  printf("\nYour Net Balance: %d\n\n", balance);

  printf("How much money you want to Transfer: ");
  scanf("%d", &transfer);
  printf("\n");

  balance -= transfer;
  printf("After Transaction, Your Net Balance: %d\n\n", balance);

  printf("\t\t[1] Main Menu\n");
  printf("\t\t[2] Log Out\n");
  printf("\t\t[3] Exit\n");

  int choice;
  printf("Your Choice: ");
  scanf("%d", &choice);

  if (choice == 1)
  {
    navigate();
  }
  else if (choice == 2)
  {
    main();
  }
  else
  {
    exit(0);
  }
}

// aboutProject funtion defination
int aboutProject()
{
  printf("\nThis Project is called Bank Management System using C progrmamming language.\n\n");
  printf("Some key features of this project: \n");
  printf("1. Create new account\n");
  printf("2. Different schemes\n");
  printf("3. Loan system\n");
  printf("4. Update information (Not included yet!)\n");
  printf("5. Removing existing account (Not included yet!)\n");
  printf("6. Show customer profile\n");
  printf("7. Calculate after transaction\n");
  printf("8. Show the list of exitsting account (Not included yet!)\n");
  printf("9. Log out / Log in\n");
  printf("10. Exit program\n");

  printf("\nContributed by: \n");
  printf("1. Nabil Khan (1036)\n");
  printf("2. Md. Sakib hossain (1266)\n");
  printf("3. Md. Shahriar Islam (1259)\n");
  printf("4. Md Assaduzzaman (1233)\n\n\n");

  printf("\t\t[1] Home\n");
  printf("\t\t[2] Exit\n");

  int choice;
  printf("Your Choice: ");
  scanf("%d", &choice);

  if (choice == 1)
  {
    main();
  }
  else
  {
    exit(0);
  }
}
