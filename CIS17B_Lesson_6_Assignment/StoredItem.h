#ifndef STOREDITEM_H
#define STOREDITEM_H
// headers ^
// libraries
#include <string>
using std::string; // had to use this instead of namespace, would throw up an error otherwise

// class for items and their information
class StoredItem {
private: // characteristics of said items
    string id;
    string description;
    string location;

public: // functions
    StoredItem(const string& id, const string& description, const string& location); // constructor
    string getId() const;
    string getDescription() const;
    string getLocation() const;
};

#endif // STOREDITEM_H
