#ifndef TRAFFIC_SENSOR_H
#define TRAFFIC_SENSOR_H

#include "Sensor.h"
#include "Reading.h"

class TrafficSensor : public Sensor {
private:
    int laneCount;
    
public:
    // Constructors & Destructor
    TrafficSensor(const std::string& id, double lat, double lon, int lanes);
    ~TrafficSensor();
    
    // Methods
    int getLaneCount() const;
    virtual Reading generateReading() override;
    virtual std::string getType() const override;
};

#endif // TRAFFIC_SENSOR_H
