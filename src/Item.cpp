//
// Created by Logan  Jackson on 9/18/23.
//

#include "Item.h"

Item newItem(double price, double weight, const std::string& name, ll quantity) {
    Item item;

    // Assign values, including default random UUID from utility.
    item.id = utility::randomUUID();
    item.price = price, item.weight = weight, item.name = name, item.quantity = quantity;

    return item;
}

std::ostream& operator<<(std::ostream& stream, const Item &item) {
    stream << "{ " << " id: " << item.id << " quantity: " << item.quantity << " weight: " << item.weight
        << " name: " << item.name << " price: " << item.price << " " << "}\n";
}
