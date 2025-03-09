#ifndef HASH_TABLE_H
#define HASH_TABLE_H

#include <vector>
#include <list>
#include <functional>

template <typename K, typename V>
class HashTable {
private:
    static const int DEFAULT_CAPACITY = 16;
    static const double LOAD_FACTOR_THRESHOLD;
    
    std::vector<std::list<std::pair<K, V>>> buckets;
    std::function<size_t(const K&)> hashFunction;
    int count;
    
    void rehash();
    
public:
    // Constructors & Destructor
    HashTable(std::function<size_t(const K&)> hasher = std::hash<K>());
    ~HashTable();
    
    // Hash table operations
    void insert(const K& key, const V& value);
    bool remove(const K& key);
    bool contains(const K& key) const;
    V& get(const K& key);
    int size() const;
    bool isEmpty() const;
};

// Template implementation goes here

#endif // HASH_TABLE_H