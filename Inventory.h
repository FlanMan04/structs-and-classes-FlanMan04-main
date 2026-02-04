#ifndef INVENTORY_H
#define INVENTORY_H
#include <Item.h>
#include <vector>

using namespace std;

// Implementa aquí la clase Inventory
// Debe incluir el constructor Inventory(int maxSlots, int maxWeight)
// Sigue la interfaz especificada en la asignación

class Inventory {
    private:
        std::vector <Item> item;
        int maxSlots;
        int maxWeight;
    public:
        Inventory(int maxSlots, int maxWeight);
        Inventory();
        ~Inventory();
        bool addItem(const Item& item);
        bool removeItem(const std::string& name);
        bool hasItem(const std::string& name) const;

        int getCurrentWeight() const;
        int getItemCount() const;
        int getMaxSlots() const;
        int getMaxWeight() const;
}; 


#endif
