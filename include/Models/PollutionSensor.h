#ifndef POLLUTION_SENSOR_H
#define POLLUTION_SENSOR_H

#include "Sensor.h"
#include "Reading.h"

class PollutionSensor : public Sensor {
private:
    std::string pollutantType;  // e.g., "PM2.5", "CO2", etc.
    
public:
    // Constructors & Destructor
    PollutionSensor(const std::string& id, double lat, double lon, const std::string& pollutant);
    ~PollutionSensor();
    
    // Methods
    std::string getPollutantType() const;
    virtual Reading generateReading() override;
    virtual std::string getType() const override;
};

#endif // POLLUTION_SENSOR_H
