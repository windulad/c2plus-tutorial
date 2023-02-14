#include <iostream>
#include <cmath>

using namespace std;

int cart(){
    string car[3] = {};
    car[0] = "bmw";
    car[1] = "audi";
    car[2] = "honda";

    int qt_cars[3] = {};
    qt_cars[0] = 3;
    qt_cars[1] = 4;
    qt_cars[2] = 13;

    cout << qt_cars[0] + qt_cars[1] + qt_cars[2] << endl;
}

int main(){
    cout << "The quantity of cars in stack: " << endl;
    cart();
    return 0;
}
