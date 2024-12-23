#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void guess()
{
    srand(time(0));
    char playAgain;

    do
    {
        int randomNum = rand() % 101;
        int inputNum;
        int hits = 0;

        cout << "Hit the random number between 0 - 100: ";
        do
        {
            cin >> inputNum;
            hits++;

            if (inputNum == randomNum)
            {
                cout << "Well done! The " << randomNum << " is correct. 😊 Your hits is: " << hits << endl;
                break;
            }
            else if (inputNum < randomNum)
            {
                cout << "The number is higher than " << inputNum << " 🙃 type a higher number: ";
            }
            else if (inputNum > randomNum)
            {
                cout << "The number is lower than " << inputNum << " 🙃 type a lower number: ";
            }
            else
            {
                cout << "Error: The number is incorect! 😑";
            }
        } while (true);
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y');

    cout << "Thank you for playing! Goodbye! 👋" << endl;
}

int main()
{

    guess();
    return 0;
}