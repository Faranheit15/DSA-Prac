#include <bits/stdc++.h>
using namespace std;

double add(double num1, double num2)
{
    return (num1 + num2);
}
double subtract(double num1, double num2)
{
    return (num1 - num2);
}
double multiply(double num1, double num2)
{
    return (num1 * num2);
}
double divide(double num1, double num2)
{
    return (num1 / num2);
}
double mod(int num1, int num2)
{
    return (num1 % num2);
}

int main()
{
    int choice;
    while (choice != 6)
    {
        cout << "1. Addition of two numbers" << endl;
        cout << "2. Subtraction of two numbers" << endl;
        cout << "3. Multiplication of two numbers" << endl;
        cout << "4. Division of two numbers" << endl;
        cout << "5. Modulus of two numbers" << endl;
        cout << "6. Exit" << endl;
        cout << "Select an option to start: ";
        cin >> choice;
        if (choice >= 1 && choice <= 5)
        {
            double num1, num2;
            cout << "Enter 1st number: ";
            cin >> num1;
            cout << "Enter 2nd number: ";
            cin >> num2;
            switch (choice)
            {
            case 1:
                cout << add(num1, num2) << endl;
                break;
            case 2:
                cout << subtract(num1, num2) << endl;
                break;
            case 3:
                cout << multiply(num1, num2) << endl;
                break;
            case 4:
                cout << divide(num1, num2) << endl;
                break;
            case 5:
            {
                int temp_num1 = num1;
                int temp_num2 = num2;
                cout << mod(temp_num1, temp_num2) << endl;
                break;
            }
            }
        }
        else if (choice == 6)
        {
            return 0;
        }
        else
        {
            cout << "Invalid option!" << endl;
        }
    }
    return 0;
}
