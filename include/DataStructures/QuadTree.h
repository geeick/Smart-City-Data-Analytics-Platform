#ifndef QUAD_TREE_H
#define QUAD_TREE_H

#include <vector>

struct Point {
    double x;
    double y;
    
    Point(double x = 0, double y = 0);
};

struct Rectangle {
    double x;
    double y;
    double width;
    double height;
    
    Rectangle(double x = 0, double y = 0, double w = 0, double h = 0);
    bool contains(const Point& p) const;
    bool intersects(const Rectangle& other) const;
};

template <typename T>
class QuadTree {
private:
    static const int MAX_CAPACITY = 4;
    
    Rectangle boundary;
    std::vector<std::pair<Point, T>> points;
    bool divided;
    
    QuadTree* northwest;
    QuadTree* northeast;
    QuadTree* southwest;
    QuadTree* southeast;
    
    void subdivide();
    
public:
    // Constructors & Destructor
    QuadTree(const Rectangle& boundary);
    ~QuadTree();
    
    // QuadTree operations
    bool insert(const Point& point, const T& data);
    std::vector<std::pair<Point, T>> queryRange(const Rectangle& range) const;
};

// Template implementation goes here

#endif // QUAD_TREE_H