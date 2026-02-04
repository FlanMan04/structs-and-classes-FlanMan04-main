#ifndef ITEM_H
#define ITEM_H
#include <string>

using namespace std;


enum ItemType {HEALING, WEAPON, ARMOR, MISC};

class Item {
    private:
        std::string name;
        int weight;
        int value;
        ItemType type;
        int power;
    public:
        Item(std::string name, int weight, int value, ItemType type, int power);
        Item();
        ~Item();       
        string getName ();
        int getWeight ();
        int getValue ();
        int getPower ();
        ItemType getType ();
};

#endif
