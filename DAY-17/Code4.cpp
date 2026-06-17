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
    
    cout << "Common Elements: ";

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(a[i] == b[j]) {
                cout << a[i] << " ";
            }
        }
    }
    return 0;
}