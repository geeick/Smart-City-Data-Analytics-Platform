#ifndef READING_H
#define READING_H

#include <string>
#include <chrono>

class Reading {
private:
    std::string sensorId;
    std::chrono::system_clock::time_point timestamp;
    double value;
    std::string units;
    
public:
    // Constructors & Destructor
    Reading(const std::string& sensorId, double value, const std::string& units);
    ~Reading();
    
    // Methods
    std::string getSensorId() const;
    std::chrono::system_clock::time_point getTimestamp() const;
    double getValue() const;
    std::string getUnits() const;
    std::string toString() const;
};

#endif // READING_H