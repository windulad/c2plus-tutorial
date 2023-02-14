#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Hey what do you want to eat" << endl;
    string ans1;
    getline(cin,ans1);
    cout << "How manu slices do you want?" << endl;
    int ans2;
    cin >> ans2;
    cout << "You want to eat " << ans2 << " slices of " << ans1 << endl;
    return 0;
}
