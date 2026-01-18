#ifndef ITINERARY_H
#define ITINERARY_H

#include <vector>
#include "city.h"
#include "graph.h"

using namespace std;

struct DayPlan {
    vector<int> placeIndices;
};

class Itinerary {
private:
    vector<DayPlan> days;

public:
    void generate(
        const City& city,
        TravelerType travelerType,
        int numberOfDays,
        const Graph& graph,
        int startNode
    );

    const vector<DayPlan>& getDays() const;
};

#endif
