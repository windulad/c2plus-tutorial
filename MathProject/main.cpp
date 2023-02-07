#include <iostream>
#include <cmath>

using namespace std;

int main() {
    string name = "Bob";
    string ex1 = "run";
    int val1 = 2;
    int val2 = 12;
    int val3 = 30;
    int val4 = 400;
    int val5 = 500;

    cout << "Hello " << name << endl;
    cout << "You ate " << min(val1, val2) << " slices of pizza and it costs " << max(val1, val2) << " dollars!" << endl;
    cout << "You have also " << ex1 << " for about " << min(val3, val4) << " minutes, you have burned " << max(val3, val4) << " calories" << endl;
    cout << "Your calorie intake was " << val5 - val4 << " calories!" << endl;
    return 0;
}
