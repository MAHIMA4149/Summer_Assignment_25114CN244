#include <iostream>
using namespace std;
int main() {
    int a[50], b[50], c[100];
    int n, m;
    cout << "Enter size of first array: ";
    cin >> n;
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Enter size of second array: ";
    cin >> m;
    cout << "Enter elements: ";
    for(int i = 0; i < m; i++)
        cin >> b[i];
    cout << "Union: ";
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";

    for(int i = 0; i < m; i++) {
        bool found = false;

        for(int j = 0; j < n; j++) {
            if(b[i] == a[j]) {
                found = true;
                break;
            }
        }
        if(!found)
            cout << b[i] << " ";
    }
    return 0;
}