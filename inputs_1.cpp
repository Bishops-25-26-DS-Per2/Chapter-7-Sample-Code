#include<iostream>
#include<string>

using namespace std;

int main() {
    string name, quest, capital_assyria;
    cout << "What is your name? ";
    // This will get everything up to a newline character.
    getline(cin, name);
    cout << "What is your quest? ";
    getline(cin, quest);
    cout << "What is the capital of Assyria? ";
    getline(cin, capital_assyria);
    cout << "Name: " << name << endl;
    cout << "Quest: " << quest << endl;
    cout << "Capital of Assyria: " << capital_assyria << endl;
}