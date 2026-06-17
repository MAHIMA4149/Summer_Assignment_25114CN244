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

    for(int i = 0; i < n; i++)
        c[i] = a[i];

    for(int i = 0; i < m; i++)
        c[n + i] = b[i];

    cout << "Merged Array: ";
    for(int i = 0; i < n + m; i++)
        cout << c[i] << " ";
    return 0;
}