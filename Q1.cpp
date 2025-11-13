// item_example.cpp
#include <iostream>
#include <iomanip>
using namespace std;

struct Item {
    int id;
    float cost;
};

int main() {
    Item items[6];

    // initialize first 4 elements with sample data
    items[0] = {101, 45.75f};
    items[1] = {102, 99.99f};
    items[2] = {103, 50.01f};
    items[3] = {104, 120.50f};
    // remaining are default-initialized (id = 0, cost = 0.0)
    items[4] = {0, 0.0f};
    items[5] = {0, 0.0f};

    cout << fixed << setprecision(2);
    cout << "Items with cost > 50.00:\n";
    for (int i = 0; i < 6; ++i) {
        if (items[i].cost > 50.00f) {
            cout << "Item id: " << items[i].id
                 << "  Cost: " << items[i].cost << '\n';
        }
    }
    return 0;
}

