#include <iostream>
#include <random>
using namespace std;
int main()
{
    cout << "Welcome to the Number Guessing Game" << endl;
    cout << "Try to guess The number" << endl;

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1, 100);

    int number = dist(gen);
    int guess;

    while (true)
    {
        cout << " Please Enter your guessed Number---> ";
        cin >> guess;

        if (guess < number)
        {
            cout << "Too low  Try again." << endl;
        }
        else if (guess > number)
        {
            cout << "Too high  Try again." << endl;
        }
        else
        {
            cout << "Congratulations You guessed the correct number " << number << endl;
            break;
        }
    }

    return 0;
}