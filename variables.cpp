#include<iostream>
#include<string>

using namespace std;

int main() {
    // x is declared & initialized, y is declared, z is declared & initialized.
    int x = 0, y, z = -375; 
    // y is assigned.
    y = 42;

    /* 
    Popular integer variable data types:
        int, unsigned int, long, unsigned long
        On a 64-bit processor, int is 32 bits/4 bytes, long is 64 bits/8 bytes.
    Popular float variable data types:
        float, double
        On a 64-bit processor, float is 32-bit/single precision 
        and double is 64-bit/double precision.
    */

    // Will give a warning that the float will be truncated into an int.
    int a = 3.1415;

    // This is fine, it is the same as b = 3.0.
    float b = 3;

    // Strings use the string data type, you need to #include<string>
    string yo = "Yo.";
}