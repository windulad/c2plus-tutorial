#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Do you lave pizza" << endl;
    string val1;
    getline(cin,val1);
    cout << "Do you love burgers" << endl;
    string val2;
    getline(cin,val2);

    if(val1 == "yes" && val2 == "yes"){
        cout << "You love pizza and burger" << endl;
    }else if(val1 == "yes" && val2 == "no"){
        cout << "You only love pizza" << endl;
    }else if(val1 == "no" && val2 == "yes"){
        cout << "You only love burgers" << endl;
    }else{
        cout << "You love none of choices" << endl;
    }

    return 0;
}
