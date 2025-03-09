#ifndef DATA_ANALYZER_H
#define DATA_ANALYZER_H

#include <vector>
#include "../Models/Reading.h"
#include "../DataStructures/LinkedList.h"

class DataAnalyzer {
public:
    // Static analysis methods
    static double calculateAverage(const LinkedList<Reading>& readings);
    static double calculateMedian(const LinkedList<Reading>& readings);
    static double calculateStandardDeviation(const LinkedList<Reading>& readings);
    static std::vector<Reading> findAnomalies(const LinkedList<Reading>& readings, double threshold);
    
    // Recursive analysis methods
    static double findMax(const LinkedList<Reading>& readings);
    static double findMin(const LinkedList<Reading>& readings);
    
    // Sorting algorithms
    template <typename Iterator>
    static void quickSort(Iterator begin, Iterator end);
    
    template <typename Iterator>
    static void mergeSort(Iterator begin, Iterator end);
    
    template <typename Iterator>
    static void insertionSort(Iterator begin, Iterator end);
};

// Template implementation goes here

#endif // DATA_ANALYZER_H