#include<iostream>
#include<string>

using namespace std;

int main() {
    // C++ never adds anything to your outputs, no spaces, endlines etc.
    string name, quest, capital_assyria;
    cout << "What is your name? ";
    // Whitespace causes problems with this. This only works with no whitespace.
    cin >> name;
    cout << "What is your quest? ";
    cin >> quest;
    cout << "What is the capital of Assyria? ";
    cin >> capital_assyria;
    cout << "Name: " << name << endl;
    cout << "Quest: " << quest << endl;
    cout << "Capital of Assyria: " << capital_assyria << endl;
}