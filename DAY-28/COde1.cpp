#include <iostream>
using namespace std;
struct Library
{
    int bookId;
    char title[50];
    char author[50];
    int quantity;
};
int main(){
    Library b;

    cout << "Enter Book ID: ";
    cin >> b.bookId;

    cout << "Enter Book Title: ";
    cin >> b.title;

    cout << "Enter Author Name: ";
    cin >> b.author;

    cout << "Enter Quantity: ";
    cin >> b.quantity;

    cout << "\n----- Library Record -----";
    cout << "\nBook ID  : " << b.bookId;
    cout << "\nTitle    : " << b.title;
    cout << "\nAuthor   : " << b.author;
    cout << "\nQuantity : " << b.quantity;
    return 0;
}