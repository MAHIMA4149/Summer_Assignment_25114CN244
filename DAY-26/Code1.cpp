#include <iostream>
using namespace std;

int main() {
    int secret = 25, guess;

    cout << "Guess the number (1-50): ";

    do {
        cin >> guess;

        if (guess > secret)
            cout << "Too High! Try Again: ";
        else if (guess < secret)
            cout << "Too Low! Try Again: ";
        else
            cout << "Congratulations! You guessed it.";
    } while (guess != secret);

    return 0;
}