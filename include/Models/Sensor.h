#ifndef SENSOR_H
#define SENSOR_H

#include <string>
#include <vector>
#include "DataStructures/LinkedList.h"

// Forward declaration
class Reading;

class Sensor {
protected:
    std::string id;
    double latitude;
    double longitude;
    LinkedList<Reading> readings;
    
public:
    // Constructors & Destructor
    Sensor(const std::string& id, double lat, double lon);
    Sensor(const Sensor& other);          // Copy constructor
    Sensor(Sensor&& other);               // Move constructor
    virtual ~Sensor();
    
    // Assignment operators
    Sensor& operator=(const Sensor& other);   // Copy assignment
    Sensor& operator=(Sensor&& other);        // Move assignment
    
    // Methods
    std::string getId() const;
    double getLatitude() const;
    double getLongitude() const;
    const LinkedList<Reading>& getReadings() const;
    void addReading(const Reading& reading);
    
    // Pure virtual method - makes this an abstract class
    virtual Reading generateReading() = 0;
    virtual std::string getType() const = 0;
};

#endif // SENSOR_H