#include <iostream>
using namespace std;

int main()
{

  double balance = 100000.0;
  int choice;
  double amount;

  do
  {
    cout << "\n===== ATM MENU =====\n";
    cout << "1. Check Balance\n";
    cout << "2. Deposit\n";
    cout << "3. Withdraw\n";
    cout << "4. Exit\n";
    cout << "Choose an option: ";
    cin >> choice;

    if (cin.fail())
    {
      cin.clear();
      cin.ignore(10000, '\n');
      cout << "Invalid input. Please enter a number.\n";
      continue;
    }

    switch (choice)
    {

    case 1:
      cout << "Your current balance is: $" << balance << endl;
      break;

    case 2:
      cout << "Enter amount to deposit: ";
      cin >> amount;

      if (amount > 0)
      {
        balance += amount;
        cout << "Deposit successful.\n";
      }
      else
      {
        cout << "Invalid amount.\n";
      }
      break;

    case 3:
      cout << "Enter amount to withdraw: ";
      cin >> amount;

      if (amount > 0 && amount <= balance)
      {
        balance -= amount;
        cout << "Withdrawal successful.\n";
      }
      else
      {
        cout << "Insufficient balance or invalid amount.\n";
      }
      break;

    case 4:
      cout << "Thank you for using the ATM.\n";
      break;

    default:
      cout << "Invalid choice. Try again.\n";
    }
  } while (choice != 4);

  return 0;

}
