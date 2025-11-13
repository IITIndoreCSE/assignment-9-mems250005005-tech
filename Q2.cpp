
#include <iostream>
#include <array>
using namespace std;

struct Color {
    int red;
    int green;
    int blue;
};

int main() {
    Color colors[5] = {
        {10, 20, 30},
        {100, 150, 200},
        {255, 0, 128},
        {60, 70, 80},
        {200, 100, 50}
    };

    for (int i = 0; i < 3; ++i) {
        colors[i].red   = 255 - colors[i].red;
        colors[i].green = 255 - colors[i].green;
        colors[i].blue  = 255 - colors[i].blue;
    }

    cout << "New RGB values for all 5 elements:\n";
    for (int i = 0; i < 5; ++i) {
        cout << "Color " << (i+1) << " - ("
             << colors[i].red << ", "
             << colors[i].green << ", "
             << colors[i].blue << ")\n";
    }
    return 0;
}

