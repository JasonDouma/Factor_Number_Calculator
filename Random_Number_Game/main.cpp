#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    while (true)
    {
        int RandNum = rand()% 10 + 1;
        int guess;
        cout << "Welcome To Guess The Number!\n";
        cout << "======" << endl;
        cout << "Guess A Number Between 1 - 10" << endl;
        cout << "\n";
        cout << "======\n";
        cin>>guess;
        cout << "======" << endl;
        cout << "\n";

        if (guess == RandNum)
        {
            cout << "You Guessed It!\n";
            cout << "The Number Was: " << RandNum << "!" << endl;
        }
        else
        {
            cout << "That Guess Was Wrong!\n";
            cout << "The Number Was: " << RandNum << "!" << endl;
        }
    }
    return 0;
}
