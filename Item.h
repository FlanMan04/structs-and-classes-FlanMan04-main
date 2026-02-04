#ifndef ITEM_H
#define ITEM_H

#include <string>

using namespace std;
// Implementa aquí la clase Item
// Sigue la interfaz especificada en la asignación
// No agregues entrada/salida

enum ItemType {HEALING, WEAPON, ARMOR, MISC};

class Item {
private:
    string name;
    int weight;
    int value;
    ItemType type;
    int power;
public:
    Item() {};
    string getName ();
    int getWeight ();
    int getValue ();
    int getPower ();
    ItemType getType ();
};

#endif
