#ifndef NOISE_SENSOR_H
#define NOISE_SENSOR_H

#include "Sensor.h"
#include "Reading.h"

class NoiseSensor : public Sensor {
private:
    double minDecibel;
    double maxDecibel;
    
public:
    // Constructors & Destructor
    NoiseSensor(const std::string& id, double lat, double lon, double minDb, double maxDb);
    ~NoiseSensor();
    
    // Methods
    double getMinDecibel() const;
    double getMaxDecibel() const;
    virtual Reading generateReading() override;
    virtual std::string getType() const override;
};

#endif // NOISE_SENSOR_H