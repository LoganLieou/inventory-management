//
// Created by Logan  Jackson on 9/18/23.
//

#ifndef INVENTORYMANAGEMENT_ITEM_H
#define INVENTORYMANAGEMENT_ITEM_H

#include "Utility.h"

struct Item {
    double price;
    double weight;
    ll quantity;
    std::string name;
    utility::uuid id;
};

Item newItem(double price, double weight, const std::string& name, ll quantity);

std::ostream& operator<<(std::ostream& stream, const Item &item);

#endif
