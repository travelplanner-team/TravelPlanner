#include <iostream>

#include "data_loader.h"
#include "city.h"
#include "traveler_type.h"
#include "graph_builder.h"
#include "itinerary.h"


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

    Graph graph = buildGraphForCity(city);

    Itinerary itinerary;
itinerary.generate(
    city,
    travelerType,
    days,
    graph,
    0   
);
const auto& itineraryDays = itinerary.getDays();
const auto& places = city.getAllPlaces();

cout << "\n📍 City: " << city.getName() << endl;
cout << "🧍 Traveler Type selected\n";
cout << "🗓️  Days: " << days << "\n";

for (int d = 0; d < itineraryDays.size(); d++) {
    cout << "\nDay " << d + 1 << ":\n";
    for (int idx : itineraryDays[d].placeIndices) {
        cout << " - " << places[idx].getName() << endl;
    }
}


    return 0;
}
