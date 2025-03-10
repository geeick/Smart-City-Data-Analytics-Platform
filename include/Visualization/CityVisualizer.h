#ifndef CITY_VISUALIZER_H
#define CITY_VISUALIZER_H

#include <string>
#include <vector>
#include "../Models/Sensor.h"
#include "../Models/Reading.h"

class CityVisualizer {
private:
    int width;
    int height;
    char** grid;
    
    // Private methods
    void initializeGrid();
    void clearGrid();
    int mapX(double longitude) const;
    int mapY(double latitude) const;
    
public:
    // Constructors & Destructor
    CityVisualizer(int width = 80, int height = 24);
    ~CityVisualizer();
    
    // Visualization methods
    void placeSensor(const Sensor& sensor);
    void visualizeReading(const Reading& reading);
    void drawCity(const std::vector<Sensor*>& sensors);
    std::string getVisualization() const;
    void exportToFile(const std::string& filename) const;
};

#endif // CITY_VISUALIZER_H
