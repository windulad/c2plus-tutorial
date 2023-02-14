#include <iostream>

using namespace std;

string color(int col){
    string colful;
    switch(col){
        case 1:
            colful = "red";
            break;
        case 2:
            colful = "yellow";
            break;
        case 3:
            colful = "blue";
            break;
        default:
            colful = "Wrong number";
    }
    return colful;
}

int main() {
    cout << color(2) << endl;
    return 0;
}
