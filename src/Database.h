//
// Created by Logan  Jackson on 9/18/23.
//

#ifndef INVENTORYMANAGEMENT_DATABASE_H
#define INVENTORYMANAGEMENT_DATABASE_H

#include "Utility.h"
#include "Item.h"

class Database {
private:
    std::unordered_map<utility::uuid, Item> db;
public:
    void allItems();
    void readItem(const utility::uuid& id);
    void createItem(Item item);
    void updateItem(const utility::uuid& id, Item item);
    void deleteItem(const utility::uuid& id);

    double totalPrice();
    Item mostFrequentItem();
};


#endif
