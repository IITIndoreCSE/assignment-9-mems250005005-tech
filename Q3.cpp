
#include <iostream>
#include <iomanip>
using namespace std;

struct Point {
    float x;
    float y;
};

int main() {
    Point pts[7];

    cout << "Enter coordinates for 7 points (x, y):\n";
    for (int i = 0; i < 7; ++i) {
        cout << "Point " << (i+1) << " - x: ";
        cin >> pts[i].x;
        cout << "Point " << (i+1) << " - y: ";
        cin >> pts[i].y;
    }

    int countFirstQuadrant = 0;
    for (int i = 0; i < 7; ++i) {
        if (pts[i].x > 0.0f && pts[i].y > 0.0f) {
            ++countFirstQuadrant;
        }
    }

    cout << "Number of points in the first quadrant: " << countFirstQuadrant << '\n';
    return 0;
}

