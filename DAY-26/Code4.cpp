#include <iostream>
using namespace std;
int main() {
    int answer, score = 0;
    cout << "------ QUIZ ------\n";

    cout << "\n1. Capital of India?\n";
    cout << "1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n";
    cin >> answer;
    if (answer == 2)
        score++;

    cout << "\n2. 5 + 7 = ?\n";
    cout << "1. 10\n2. 11\n3. 12\n4. 13\n";
    cin >> answer;
    if (answer == 3)
        score++;

    cout << "\n3. C++ was developed by?\n";
    cout << "1. Dennis Ritchie\n2. Bjarne Stroustrup\n3. James Gosling\n4. Guido van Rossum\n";
    cin >> answer;
    if (answer == 2)
        score++;

    cout << "\nYour Score = " << score << " out of 3";

    return 0;
}
