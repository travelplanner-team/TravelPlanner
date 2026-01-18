#include "itinerary.h"
#include "dijkstra.h"

void Itinerary::generate(
    const City& city,
    TravelerType travelerType,
    int numberOfDays,
    const Graph& graph,
    int startNode
) {
    days.clear();

    int placesPerDay;
    switch (travelerType) {
        case TravelerType::Explorer:
            placesPerDay = 4;
            break;
        case TravelerType::Budgeted:
            placesPerDay = 3;
            break;
        case TravelerType::Relaxed:
        case TravelerType::Luxury:
            placesPerDay = 2;
            break;
    }

    const auto& places = city.getAllPlaces();

    vector<double> distances = dijkstra(graph, startNode);

    vector<int> order;
    for (int i = 0; i < (int)places.size(); i++) {
        order.push_back(i);
    }
    sort(order.begin(), order.end(), [&](int a, int b) {
        return distances[a] < distances[b];
    });
    int index = 0;
    for (int d = 0; d < numberOfDays && index < (int)order.size(); d++) {
        DayPlan day;

        for (int k = 0; k < placesPerDay && index < (int)order.size(); k++) {
            day.placeIndices.push_back(order[index]);
            index++;
        }
        days.push_back(day);
    }
}

const vector<DayPlan>& Itinerary::getDays() const {
    return days;
}
