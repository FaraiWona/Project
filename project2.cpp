#include <iostream>
#include <string>
using namespace std;

int main() {
    std::string elements[] = {
        "B123",
        "C234",
        "A345",
        "C15",
        "B177",
        "G3003",
        "C235",
        "B179"
    };

    cout << "Elements starting with 'B':" <<endl;
    for (const auto& element : elements) {
        if (element[0] == 'B') {
            cout << element <<endl;
        }
    }

    return 0;
}