#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    cin >> S;

    if (S == "Red") {
        cout << "Contestant" << endl;
    } else if (S == "Green") {
        cout << "Coach" << endl;
    } else if (S == "Blue") {
        cout << "Judge" << endl;
    }

    return 0;
}
