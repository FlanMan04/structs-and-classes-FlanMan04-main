#include "Item.h"

Item::Item(std::string name, int weight, int value, ItemType type, int power) : name(name), weight(weight), value(value), type(type), power(power) {}
Item::Item() {}
Item::~Item() {}

std::string Item::getName() {
    return name;
}

int Item::getWeight() {
    if(weight < 0)
        weight = 0;
    return weight;
}

int Item::getValue() {
    if (value < 0)
        value = 0;
    return value;
}

int Item::getPower() {
    if (power < 0)
        power = 0;
    return power;
}

ItemType Item::getType() {
    return type;
}
