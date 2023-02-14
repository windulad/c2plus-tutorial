#include <iostream>
#include <cmath>

using namespace std;

int main() {
    string food[5] = {};
    cout << "Please fill the number 2 of array" << endl;
    getline(cin,food[2]);
    cout << "Please fill the number 3 of array" << endl;
    getline(cin,food[3]);
    cout << food[0] << endl;
    cout << food[1] << endl;
    cout << food[2] << endl;
    cout << food[3] << endl;
    cout << food[4] << endl;
    return 0;
}
