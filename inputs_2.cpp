#include<iostream>
#include<string>

using namespace std;

int main() {
    int age;
    string name, job;
    cout << "What is your name? ";
    getline(cin, name);
    cout << "What is your age? ";
    // getline doesn't work with inputs of numbers, only works with strings
    cin >> age;
    // The newline character can't go into age because age is an integer.
    // So the newline character is still in the input buffer, so the next
    //    input will get that newline character and complete before getting
    //    any input from the user.
    
    // Try it without this next line to see that happen.  This line flushes 
    //    the newline character out of the input buffer.
    cin.ignore();
    cout << "What is your job? ";
    getline(cin, job);

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Job: " << job << endl;
}