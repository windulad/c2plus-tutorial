#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Create a password:" << endl;
    string pass;
    getline(cin,pass);

    cout << "What is the password ?" << endl;
    string i;
    getline(cin,i);

    while (i != pass){
        cout << "Wrong password, Try again" << endl;
        getline(cin,i);
    }

    cout << "You are in" << endl;

    return 0;
}
