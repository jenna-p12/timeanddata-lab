//1. The UTC offset is +9, the time in tokyo is 7pm
//2. -7

///1. Display the Local Time
//Write a program that retrieves the current local time and displays it in a human-readable format.
//Include the current date and time.

#include <iostream>
#include <ctime>
using namespace std;
int main () {
    int zone;
    double diff_t;
    time_t now = time(nullptr);
    cout << "Current Time: " << ctime(&now);

    cout << "Enter a time zone offset from UTC in hours (ex: -5)" << endl;
    cin >> zone;

    now += zone * 3600;
    tm * timeZoneTime = gmtime(&now);

    cout << "The time in the offset you did is: " << asctime(timeZoneTime) << endl;

    cout << "what is 2 + 2?" << endl;
    time_t start = time(nullptr);
    int answer;
    cin >> answer;
    time_t end = time(nullptr);

    diff_t = difftime(end, start);
    cout << "It took you " << diff_t << " seconds." << endl;

}