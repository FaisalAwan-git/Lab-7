#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> items = {
        "Sofa",
        "Television",
        "Microwave",
2nd_branch
        "Washing Machine",
      
        "Vacuum Cleaner",
main
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
