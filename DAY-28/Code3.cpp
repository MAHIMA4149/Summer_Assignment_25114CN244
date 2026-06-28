#include <iostream>
using namespace std;
struct Ticket
{
    int ticketNo;
    char name[50];
    char destination[50];
    int seats;
    float fare;
};
int main()
{
    Ticket t;
    cout << "Enter Ticket Number: ";
    cin >> t.ticketNo;

    cout << "Enter Passenger Name: ";
    cin >> t.name;

    cout << "Enter Destination: ";
    cin >> t.destination;

    cout << "Enter Number of Seats: ";
    cin >> t.seats;

    cout << "Enter Fare per Seat: ";
    cin >> t.fare;
    cout << "\n----- Ticket Details -----";
    cout << "\nTicket No   : " << t.ticketNo;
    cout << "\nPassenger   : " << t.name;
    cout << "\nDestination : " << t.destination;
    cout << "\nSeats       : " << t.seats;
    cout << "\nTotal Fare  : " << t.seats * t.fare;
    return 0;
}