#include <iostream>
using namespace std;
int main(){
    int arr[100], n, choice, i, pos, value;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter elements:\n";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    do{
        cout << "\n===== ARRAY MENU =====";
        cout << "\n1. Display";
        cout << "\n2. Insert";
        cout << "\n3. Delete";
        cout << "\n4. Search";
        cout << "\n5. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;
        switch (choice){
        case 1:
            cout << "Array: ";
            for (i = 0; i < n; i++)
                            cout << arr[i] << " ";
            break;

        case 2:
            cout << "Enter position and value: ";
            cin >> pos >> value;

            if (pos >= 1 && pos <= n + 1)
            {
                for (i = n; i >= pos; i--)
                    arr[i] = arr[i - 1];

                arr[pos - 1] = value;
                n++;
            }
            else
                cout << "Invalid position.";
            break;

        case 3:
            cout << "Enter position to delete: ";
            cin >> pos;

            if (pos >= 1 && pos <= n){
                for (i = pos - 1; i < n - 1; i++)
                    arr[i] = arr[i + 1];

                n--;
            }
            else
                cout << "Invalid position.";
            break;

        case 4:
            cout << "Enter value to search: ";
            cin >> value;

            for (i = 0; i < n; i++){
                if (arr[i] == value)
                {
                    cout << "Found at position " << i + 1;
                    break;
                }
            }

            if (i == n)
                cout << "Not Found.";
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