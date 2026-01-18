#include <iostream>

#include "data_loader.h"
#include "city.h"
#include "traveler_type.h"

using namespace std;

int main() {
    cout << "===== TravelPlanner =====\n\n";

    int cityChoice;
    int travelerChoice;
    int days;
    cout << "Select City:\n";
    cout << "1. Delhi\n";
    cout << "2. Mumbai\n";
    cout << "3. Bangalore\n";
    cout << "4. Goa\n";
    cout << "Enter choice: ";
    cin >> cityChoice;
    cout << "\nSelect Traveler Type:\n";
    cout << "1. Explorer\n";
    cout << "2. Budgeted\n";
    cout << "3. Relaxed\n";
    cout << "4. Luxury\n";
    cout << "Enter choice: ";
    cin >> travelerChoice;

    cout << "\nEnter number of days: ";
    cin >> days;

    TravelerType travelerType;
    switch (travelerChoice) {
        case 1:
            travelerType = TravelerType::Explorer;
            break;
        case 2:
            travelerType = TravelerType::Budgeted;
            break;
        case 3:
            travelerType = TravelerType::Relaxed;
            break;
        case 4:
            travelerType = TravelerType::Luxury;
            break;
        default:
            travelerType = TravelerType::Explorer;
    }

    City city = getCityByChoice(cityChoice);

    cout << "\nGenerating itinerary...\n";
    cout << "City: " << city.getName() << endl;
    cout << "Days: " << days << endl;

    cout << "\n[Input layer working successfully]\n";

    return 0;
}
