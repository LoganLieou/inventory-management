//
// Created by Logan  Jackson on 9/18/23.
//

#include "Database.h"

void Database::allItems() {
    for (auto &[key, value] : this->db) {
        std::cout << key << " " << value << " " << std::endl;
    }
}

void Database::readItem(const utility::uuid &id) {
    Item item = this->db[id];
    std::cout << item << std::endl;
}

double Database::totalPrice() {
    double result = 0.0;
    for (auto &[_, value] : this->db) {
        result += value.price;
    }
    return result;
}

Item Database::mostFrequentItem() {
    std::pair<ll, Item> result (INT64_MIN, Item());
    for (auto &[_, value] : this->db) {
        if (value.quantity > result.first) {
            result = {value.quantity, value};
        }
    }
    return result.second;
}

void Database::createItem(Item item) {
    this->db[item.id] = item;
}

void Database::updateItem(const utility::uuid& id, Item item) {
    this->db[id] = std::move(item);
}

void Database::deleteItem(const utility::uuid &id) {
    try {
        db.erase(id);
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}
