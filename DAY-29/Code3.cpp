#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char str1[100], str2[100];
    int choice;

    cout << "Enter first string: ";
    cin.getline(str1, 100);
    do{
        cout << "\n===== STRING MENU =====";
        cout << "\n1. Length";
        cout << "\n2. Copy";
        cout << "\n3. Concatenate";
        cout << "\n4. Compare";
        cout << "\n5. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice){
        case 1:
            cout << "Length = " << strlen(str1);
            break;

        case 2:
            strcpy(str2, str1);
            cout << "Copied String = " << str2;
            break;

        case 3:
            cout << "Enter second string: ";
            cin.getline(str2, 100);

            strcat(str1, str2);
            cout << "Concatenated String = " << str1;
            break;

        case 4:
            cout << "Enter second string: ";
            cin.getline(str2, 100);

            if (strcmp(str1, str2) == 0)
                cout << "Strings are Equal";
            else
                cout << "Strings are Not Equal";
            break;

        case 5:
            cout << "Exit.";
            break;

        default:
            cout << "Invalid choice.";
        }
    } while (choice != 5);
    return 0;
}