#include "place.h"

Place::Place(
    std::string name,
    std::string fullAddress,
    std::string city,
    double latitude,
    double longitude,
    std::string category,
    double rating,
    int visitTimeHours,
    int costLevel,
    std::vector<TravelerType> allowedTypes
) : name(name),
    fullAddress(fullAddress),
    city(city),
    latitude(latitude),
    longitude(longitude),
    category(category),
    rating(rating),
    visitTimeHours(visitTimeHours),
    costLevel(costLevel),
    allowedTravelerTypes(allowedTypes) {}

bool Place::isSuitableFor(TravelerType type) const {
    for (auto t : allowedTravelerTypes) {
        if (t == type)
            return true;
    }
    return false;
}
double Place::getLatitude() const {
    return latitude;
}

double Place::getLongitude() const {
    return longitude;
}

