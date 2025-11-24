#include "flight.h"
#include <iostream>
using namespace std;

void addFlight(vector<Flight> &flights) {
    Flight f;
    
    cout << "Nhap ma chuyen bay";
    cin >> f.flightID;
    
    cout << "Nhap noi di";
    cin >> f.departure;
    
    cout << "Nhap noi den";
    cin >> f.destination;
    
    cout << "Nhap ngay bay";
    cin >> f.date;
    
    cout << "Nhap so ghe trong";
    cin >> f.availableSeats;

    flights.push_back(f);
    cout << "Da them chuyen bay thanh cong!\n";
}

void showFlights(const vector<Flight> &flights) {
    for (auto &f : flights) {
        cout << "Ma: " << f.flightID
             << " | " << f.departure << " -> " << f.destination
             << " | Ngay: " << f.date
             << " | Ghe trong: " << f.availableSeats << endl;
    
    }
}

void searchFilght(const vector<Flight> &flights, const string &departure, const string &destination) {
    cout << "\n--- KET QUA TIM KIEM ---\n";
    for (auto &f : flights) {
        if ( f.departure == departure && f.destination == destination)
            cout << f.flightID << " - " << f.date << " ( " << f.availableSeats << " ghe trong)\n";
            
    }

}
