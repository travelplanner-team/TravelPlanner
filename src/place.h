#ifndef PLACE_H
#define PLACE_H

#include <string>
#include <vector>
#include "traveler_type.h"

class Place {
private:
    std::string name;
    std::string fullAddress;
    std::string city;

    double latitude;
    double longitude;

    std::string category;
    double rating;
    int visitTimeHours;
    int costLevel;

    std::vector<TravelerType> allowedTravelerTypes;

public:
    Place(
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

    );

    bool isSuitableFor(TravelerType type) const;
    double getLatitude() const;
    double getLongitude() const;
};

#endif
