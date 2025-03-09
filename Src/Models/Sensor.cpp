#include "../../include/Models/Sensor.h"
#include "../../include/Models/Reading.h"

// Constructor
Sensor::Sensor(const std::string& id, double lat, double lon)
    : id(id), latitude(lat), longitude(lon) {
}

// Copy constructor
Sensor::Sensor(const Sensor& other)
    : id(other.id), latitude(other.latitude), longitude(other.longitude), readings(other.readings) {
}

// Move constructor
Sensor::Sensor(Sensor&& other)
    : id(std::move(other.id)), latitude(other.latitude), longitude(other.longitude), 
      readings(std::move(other.readings)) {
}

// Destructor
Sensor::~Sensor() {
}

// Copy assignment operator
Sensor& Sensor::operator=(const Sensor& other) {
    if (this != &other) {
        id = other.id;
        latitude = other.latitude;
        longitude = other.longitude;
        readings = other.readings;
    }
    return *this;
}

// Move assignment operator
Sensor& Sensor::operator=(Sensor&& other) {
    if (this != &other) {
        id = std::move(other.id);
        latitude = other.latitude;
        longitude = other.longitude;
        readings = std::move(other.readings);
    }
    return *this;
}

// Getter methods
std::string Sensor::getId() const {
    return id;
}

double Sensor::getLatitude() const {
    return latitude;
}

double Sensor::getLongitude() const {
    return longitude;
}

const LinkedList<Reading>& Sensor::getReadings() const {
    return readings;
}

// Add a reading to this sensor
void Sensor::addReading(const Reading& reading) {
    readings.addBack(reading);
}