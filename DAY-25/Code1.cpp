#include <iostream>
using namespace std;
int main() {
    int a[50], b[50], c[100];
    int n, m, i, j, k = 0;

    cout << "Enter size of first array: ";
    cin >> n;
    cout << "Enter elements of first sorted array: ";
    for(i = 0; i < n; i++)
        cin >> a[i];
    cout << "Enter size of second array: ";
    cin >> m;
    cout << "Enter elements of second sorted array: ";
    for(i = 0; i < m; i++)
        cin >> b[i];
        
    i = j = 0;
    while(i < n && j < m) {
        if(a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }
    while(i < n)
        c[k++] = a[i++];

    while(j < m)
        c[k++] = b[j++];

    cout << "Merged Array: ";
    for(i = 0; i < k; i++)
        cout << c[i] << " ";
    return 0;
}