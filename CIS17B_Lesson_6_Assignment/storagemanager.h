#ifndef STORAGEMANAGER_H
#define STORAGEMANAGER_H
// headers ^
// note: I used std:: due to errors when not using it, wasn't completely sure why but people on stack overflow mentioned the same issue
// libraries
#include <memory>
#include <string>
#include <unordered_map>
#include <map>
#include <stdexcept>

// the exceptions
class DuplicateItemException : public std::runtime_error {
public:
    explicit DuplicateItemException(const std::string& msg);
};

class ItemNotFoundException : public std::runtime_error {
public:
    explicit ItemNotFoundException(const std::string& msg);
};

// class for storing the item
class StoredItem {
public: // member functions
    StoredItem(const std::string& id, const std::string& description, const std::string& location);
    std::string getId() const;
    std::string getDescription() const;
    std::string getLocation() const;
private: // nonchangeable unless with the specific functions
    std::string id;
    std::string description;
    std::string location;
};

// class for managing storage
class StorageManager {
public:// functions
    void addItem(const std::shared_ptr<StoredItem>& item);
    std::shared_ptr<StoredItem> findById(const std::string& id) const; // pointer to find specific id
    void removeItem(const std::string& id);
    std::map<std::string, std::shared_ptr<StoredItem>> listItemsByDescription() const;
private:
    std::unordered_map<std::string, std::shared_ptr<StoredItem>> itemById; // from assignment 4
    std::map<std::string, std::shared_ptr<StoredItem>> itemByDescription;
};

#endif // STORAGEMANAGER_H

