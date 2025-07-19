//TASK1.C++
//This is a number guessing game.....


#include <iostream>
#include <cstdlib>   // for rand() and srand()
#include <ctime>     // for time()

using namespace std;

int main() {
    int num, guess;

    // Initialize random number generator seed
    srand(time(0));

    // Let's generate a random number between 1 and 100
    num = rand() % 100 + 1;

    cout << "Guess the Number Game\n";
    cout << "**********************\n";
    cout << "I have thought of a number between 1 and 100.\n";

    // Loop until we guess the number correctly
    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > num) {
            cout << "Too high! Try again.\n";
        } else if (guess < num) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "Congratulations! You guessed the correct number.\n";
        }
    } while (guess != num);

    return 0;
}