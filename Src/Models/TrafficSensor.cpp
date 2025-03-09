#include "../../include/Models/TrafficSensor.h"
#include <random>

// Constructor
TrafficSensor::TrafficSensor(const std::string& id, double lat, double lon, int lanes)
    : Sensor(id, lat, lon), laneCount(lanes) {
}

// Destructor
TrafficSensor::~TrafficSensor() {
}

// Get lane count
int TrafficSensor::getLaneCount() const {
    return laneCount;
}

// Generate a simulated reading
Reading TrafficSensor::generateReading() {
    // Generate random vehicle count between 0 and 20 per lane
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 20 * laneCount);
    
    double vehicleCount = dis(gen);
    return Reading(getId(), vehicleCount, "vehicles");
}

// Get sensor type
std::string TrafficSensor::getType() const {
    return "Traffic";
}