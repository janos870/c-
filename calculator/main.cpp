#include <iostream>
using namespace std;

void calculator()
{
    float n1, n2, result;
    char symbol;
    cout << "Enter a number: ";
    cin >> n1;
    cout << "Add an operator, (+, -, *, /): ";
    cin >> symbol;
    cout << "Enter an other number: ";
    cin >> n2;

    switch (symbol)
    {
    case '+':
        result = n1 + n2;
        break;
    case '-':
        result = n1 - n2;
        break;
    case '*':
        result = n1 * n2;
        break;
    case '/':
        if (n2 != 0)
        {
            result = n1 / n2;
        }
        else
        {
            cout << "Error: Division by zero is not allowed." << endl;
            return;
        }

    default:
        cout << "Invalid symbol!" << endl;
        return;
    }

    cout << "Result is: " << n1 << " + " << n2 << " = " << result << endl;
}

int main()
{
    calculator();

    return 0;
}
