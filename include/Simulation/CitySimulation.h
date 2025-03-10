#ifndef CITY_SIMULATION_H
#define CITY_SIMULATION_H

#include <vector>
#include <map>
#include <string>
#include "../DataStructures/QuadTree.h"
#include "../DataStructures/HashTable.h"
#include "../DataStructures/BinarySearchTree.h"
#include "../DataStructures/Heap.h"
#include "../DataStructures/Queue.h"
#include "../Models/Sensor.h"
#include "../Models/Reading.h"

class CitySimulation {
private:
    std::vector<Sensor*> sensors;
    QuadTree<Sensor*> spatialIndex;
    HashTable<std::string, Sensor*> sensorLookup;
    BinarySearchTree<Reading*> timeIndex;
    Heap<std::pair<double, Reading*>> alertPriorityQueue;
    Queue<std::string> eventQueue;
    
    // Private methods
    void processReading(Reading* reading);
    bool isAnomaly(const Reading& reading) const;
    
public:
    // Constructors & Destructor
    CitySimulation();
    ~CitySimulation();
    
    // Simulation methods
    void addSensor(Sensor* sensor);
    void removeSensor(const std::string& sensorId);
    Sensor* getSensor(const std::string& sensorId) const;
    std::vector<Sensor*> getSensorsInArea(double x, double y, double radius) const;
    
    void runSimulation(int steps);
    void generateReport() const;
    
    // Event methods
    void addEvent(const std::string& eventDescription);
    std::string getNextEvent();
    
    // Alert methods
    void addAlert(Reading* reading, double priority);
    std::pair<double, Reading*> getHighestPriorityAlert();
};

#endif // CITY_SIMULATION_H