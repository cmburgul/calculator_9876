#include <iostream>
#include <bits/stdc++.h>
#include <unistd.h>

using namespace std;
    
void atm_controller()
{
    int balance = 0;
    int count = 3;
    int pin = 9876;
    int input_pin;
    int option = 0;
    int deposit = 0;

    cout << "--- Welcome to cmb Bank ---" << endl;

    while (count)
    {
        cout << "Please enter your pin : ";
        cin >> input_pin;


        if (input_pin == pin)
        {
            cout << "Welcome to your account" << endl;
            while (option != 4)
            {
                cout << "Press one of the option here\n"
                << "1 - Account balance\n"
                << "2 - Deposit money\n"
                << "3 - Withdraw money\n"
                << "4 - Exit" << endl; 
                cin >> option;
 
                if (option == 1)
                {
                    cout << "Your account balance is : " << balance << endl;

                    int key;
                    count = 8;
                    cout << "Press 5 to continue " << endl;
                    while (count && key != 5)
                    {
                        cin >> key;
                        sleep(1);
                        count--;
                        if (count == 1) option = 4;
                    }
                }
                else if (option == 2) 
                {
                    cout << "Enter the amount you want to deposit : ";
                    cin >> deposit;
                    balance += deposit;
                    cout << "Your current account balance is : " << balance << endl;


                }
                else if (option == 3)
                {
                    cout << "Enter the amount to be withdrawn : ";
                    cin >> deposit;
                    balance -= deposit;
                    cout << "Your current balance is : " << balance << endl;
                }
                else if (option == 4)
                {
                    cout << "Have a nice day!" << endl;
                    break;
                }
                else
                {
                    cout << "Please press the right option " << endl;
                }
                
            }
            break;
        }
        else
        {
            if (count == 1)
                cout << "Sorry, you have exhausted all the chances for trying your pin." << endl;
            else    
                cout << "You presed the wrong pin. You have " << count-1 << " chances left." << endl;
            count--;
        }
    }

}

int main()
{
    atm_controller();

    return 0; 
}