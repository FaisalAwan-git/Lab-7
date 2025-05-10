#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> items = {
        "Sofa",
        "Television",
        "Microwave",
        "Washing Machine",
        "Table",
        "Chair",
        "Lamp",
        "Fan",
        "Carpet",
        "Curtains"
    };

    for (const string& item : items) {
        cout << item << endl;
    }

    return 0;
}
