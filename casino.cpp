#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    int lowerLimit = 1;    // Lower limit for the random number
    int upperLimit = 100;  // Upper limit for the random number
    int randomNumber = rand() % (upperLimit - lowerLimit + 1) + lowerLimit;
    int playerGuess;
    int attempts = 0;
    bool hasGuessedCorrectly = false;

    cout << "Welcome to the Casino Guessing Number Game!" << endl;
    cout << "I've selected a number between " << lowerLimit << " and " << upperLimit << ". Try to guess it." << endl;

    while (!hasGuessedCorrectly) {
        cout << "Enter your guess: ";
        cin >> playerGuess;
        attempts++;

        if (playerGuess < lowerLimit || playerGuess > upperLimit) {
            cout << "Please enter a number within the valid range." << endl;
        } else if (playerGuess < randomNumber) {
            cout << "Too low! Try again." << endl;
        } else if (playerGuess > randomNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number, which was " << randomNumber << "." << endl;
            cout << "It took you " << attempts << " attempts." << endl;
            hasGuessedCorrectly = true;
        }
    }

    return 0;
}
