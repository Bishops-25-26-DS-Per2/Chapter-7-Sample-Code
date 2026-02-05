/* Style Note 1: Include a 3-line header on every file
Author: Dr. J (TBSDrJ)
Date: Spring 2026
Program/Purpose: Notes from class, Feb 5 2026

Style Note 2: 80 character limit still applies. 
Style Note 3: Use proper indentation.  C++ is waay less fussy about whitespace,
    so this is easier.
Style Note 4: Variable declarations should come a the top of the region of 
    their scope.
*/
#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;

int main() {
    int x;
    string tmp, name;
    cout << "Give me a number: ";
    getline(cin, tmp);
    x = atoi(tmp.c_str());
    if (x < 0) {
        cout << "I really didn't want a negative number." << endl;
        return 0;
    } 
    cout << "Moving on with a positive value for x." << endl;

    cout << "Give me your name: ";
    // This one ignores everything after whitespace
    // cin >> name;
    
    // getline() always gets the entire input and leaves the buffer empty.
    getline(cin, name);
    cout << "Welcome, " << name << endl;

    /*
    Something to notice about getline():
    Notice that getline has two arguments: cin, name
    cin is an input, but name is *** an output ***.  This is not uncommon 
        in C/C++.
    In C/C++, arguments are not always inputs.  Sometimes they are returns.
    */

    // This is in the Python to C++ document, but I just want to highlight it:
    // Try this with a name that has a dot a name that doesn't.
    unsigned int y = name.find('.');
    int z = name.find('.');
    cout << y << " " << z << endl << endl;
    // This will NEVER to be true.  name.find() uses an unsigned data type, so
    //    if the character is not found, it will look like 2^64 - 1, not -1.
    if (name.find('.') < 0) {
    }
    // So, assign the result of name.find() to a signed integer data type.

    // Minor cool thing that you can do in C++ but not in Python:
    // Python for loop: for i in range(n): 0, 1, ... , n-1
    // In C++, the bound can be a float.  So, e.g. all_factors is easier because
    //   <=math.sqrt(n) can be the bound and you don't have to worry about 
    //   roundoff.
    float n = 10.56;
    for (int i=0; i<n; i++) {
        cout << i << " ";
    }
    cout << endl;

    // Make sure that the last thing you output to the Terminal is a newline.
    cout << endl;
}
