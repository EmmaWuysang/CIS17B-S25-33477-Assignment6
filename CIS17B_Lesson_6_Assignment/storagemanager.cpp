/*
 * File:   StorageManager.cpp
 * Author: Emma Wuysang
 * Creator Notes: Everything should work, few things may be different than project base/implementations
 * Created on June 2, 2025 4:30 PM
 * Purpose: Develop a Simple Storage Management System using Ordered and Unordered Collections utilize a GUI
 */

#include "StorageManager.h"
// note: all these are taken from the original StorageManager for assignment 4 that we did!

// the exception class from our first program
DuplicateItemException::DuplicateItemException(const std::string& msg)
    : std::runtime_error(msg) {}

ItemNotFoundException::ItemNotFoundException(const std::string& msg)
    : std::runtime_error(msg) {}

// defining the storeditem method, constructor
StoredItem::StoredItem(const std::string& id, const std::string& description, const std::string& location)
    : id(id), description(description), location(location) {}

std::string StoredItem::getId() const { // returning specific attributes
    return id;
}
std::string StoredItem::getDescription() const {
    return description;
}
std::string StoredItem::getLocation() const {
    return location;
}

// defining the storagemanager method
void StorageManager::addItem(const std::shared_ptr<StoredItem>& item) {
    if (itemById.find(item->getId()) != itemById.end()) { // exceptions
        throw DuplicateItemException("Item with ID " + item->getId() + " already exists!");
    }
    itemById[item->getId()] = item; // forming the item
    itemByDescription[item->getDescription()] = item;
}

// shared pointer for findByID definiton
std::shared_ptr<StoredItem> StorageManager::findById(const std::string& id) const {
    auto check = itemById.find(id); // iterates to check if the item exists
    if (check == itemById.end()) { // goes till the end
        throw ItemNotFoundException("Item with ID " + id + " not found!"); // if id doesnt exist
    }
    return check->second;
}

void StorageManager::removeItem(const std::string& id) {
    auto check2 = itemById.find(id); // checks through for id again
    if (check2 == itemById.end()) {
        throw ItemNotFoundException("Item with ID " + id + " not found!");
    }
    itemByDescription.erase(check2->second->getDescription());
    itemById.erase(check2); // removes the item
}

std::map<std::string, std::shared_ptr<StoredItem>> StorageManager::listItemsByDescription() const {
    return itemByDescription; // items description
}

